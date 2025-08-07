#include<bits/stdc++.h>
using namespace std;

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

int findLeftMost(int fruit,int *st,int lo,int hi,int i)
{
    if(st[i]>fruit) return -1;
    if(lo==hi) 
    {
        st[i]=-1;
        return 1;
    }
    
    int val;
    int mid=lo + (hi-lo)/2;
    if(st[i]>=fruit)
    {
       val= findLeftMost(fruit,st,lo,mid,2*i+1);
    }
    else
    {
        val= findLeftMost(fruit,st,mid+1,hi,2*i+1);
    }
    st[i] = max(st[2*i],st[2*i+1]);
    return val;
}

int main()
{
    int arr[]={1,2,5,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int height = (int)(ceil(log2(n)));
    int max_element = 2*(int)pow(2,height)-1;
    int *st_max = new int[max_element];
    for(int i=0;i<max_element;i++) st_max[i]=0;
    BuildMaxST(arr,st_max,0,n-1,0); 
    printTree(st_max,n);
}