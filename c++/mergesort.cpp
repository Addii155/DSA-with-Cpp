#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid=(s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *first=new int[l1];
    int *second=new int[l2];

    int index=s;
    for(int i=0;i<l1;i++)
    {
        first[i]=arr[index++];
    }
    index=mid+1;
    for(int i=0;i<l2;i++)
    {
        second[i]=arr[index++];
    }
    int i1=0,i2=0;
    index=s;
    while(i1<l1  && i2  < l2)
    {
         if(first[i1]<second[i2])
         {
            arr[index++]=first[i1++];
         }
         else
         {
            arr[index++]=second[i2++];
         }
    }
         while(i1<l1)
         {
            arr[index++]=first[i1++];
         }
         while (i2<l2)
         {
            arr[index++]=second[i2++];
         }
         
    

}
void mergesort(int *arr,int s,int e)
{
    
    if(s>=e)
    return;
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
int arr[]={5,1,6,2,7,1};
int n=sizeof(arr)/sizeof(arr[0]);
mergesort(arr,0,n-1);   
cout<<"sorted array is"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}