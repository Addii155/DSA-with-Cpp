#include<bits/stdc++.h>
using namespace std;
int getSumUtils(int *st,int ss,int se,int qs,int qe,int si)
{
    // complete overlap
    if(qs<=ss && qe>=se)
    {
        return st[si];
    }
    // no overlap
    if(qe<ss || qs>se) return 0;
    int mid=(ss+se)/2;
    return getSumUtils(st,ss,mid,qs,qe,2*si+1)+
            getSumUtils(st,mid+1,se,qs,qe,2*si+2);

}
int getSum(int *st,int n,int qs,int qe)
{
    if(qs<0 || qe>n-1 || qs>qe) return -1;
    return getSumUtils(st,0,n-1,qs,qe,0);
}
void updatevalueUtils(int *st,int ss,int se,int i,int diff,int si )
{
    if(i<ss || i>se) return ;
    st[si]+=diff;
    if(ss<se)
    {
        int mid=(ss+se)/2;
        updatevalueUtils(st,ss,mid,i,diff,2*si+1);
        updatevalueUtils(st,mid+1,se,i,diff,2*si+2);
    }
}
void updateValue(int *st,int arr[],int n,int i,int newval)
{
    if(i<0 || i>=n) return ;
    int diff=newval-arr[i];
    arr[i]=newval;
    updatevalueUtils(st,0,n-1,i,diff,0);
}

int constructSTUtils(int arr[],int ss,int se,int *st,int si)
{
    if(ss==se)
    {
        st[si]=arr[ss];
        return st[si];
    }

    int mid = (ss+se)/2;
    int left = constructSTUtils(arr,ss,mid,st,2*si+1);
    int right = constructSTUtils(arr,mid+1,se,st,2*si+2);
    
    st[si] = left+right;
    return st[si];
}

int *construct_segment_tree(int& n,int arr[])
{
    int height = (int)(ceil(log2(n)));
    int max_size = 2*(int)pow(2,height)-1;
    
    int *st = new int[max_size];
    
    constructSTUtils(arr,0,n-1,st,0);
    return st;
}

void printTree(int *st, int n) {
    int height = (int)(ceil(log2(n)));
    int total_nodes = 2 * (int)pow(2, height) - 1;

    int index = 0;
    for(int level = 0; level <= height; level++) {
        int nodes_in_level = (int)pow(2, level);
        for(int j = 0; j < nodes_in_level && index < total_nodes; j++) {
            cout << st[index++] << " ";
        }
        cout << endl;
    }
}
int BuildMaxST(int arr[],int *st,int lo,int hi,int si)
{
    if(lo==hi)
    {
        st[si]=arr[lo];
        return st[si];
    }
    int mid= lo + (hi-lo)/2;
    int left=BuildMaxST(arr,st,lo,mid,2*si+1);
    int right=BuildMaxST(arr,st,mid+1,hi,2*si+2);
    return st[si] = max(left,right);
}
int main()
{
    int arr[]={1,2,5,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int height = (int)(ceil(log2(n)));
    int max_element = 2*(int)pow(2,height)-1;
    int *segmentTree=construct_segment_tree(n,arr);
    // updateValue(segmentTree,arr,n,5,10);
    printTree(segmentTree,n);
    // cout<<"query Sum:-> "<< getSum(segmentTree,n,1,5)<<endl;

    int *st_max = new int[max_element];
    for(int i=0;i<max_element;i++) st_max[i]=0;
    BuildMaxST(arr,st_max,0,n-1,0); 
    printTree(st_max,n);

}

//      30 
//     /   \
//    8     22
//   / \   /   \ 
//  3  5   13   9
//  /  \   /  \  
//  1   2  6  7      
