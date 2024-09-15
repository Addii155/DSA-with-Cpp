#include<stdio.h>
int binary_search(int arr[],int n,int key,int s,int e)
{
   
    if(s>e) return -1;
    int m=s+(e-s)/2;
    if(arr[m]==key)
    {
        return m;
    }else if(arr[m]>key) return binary_search(arr,n,key,s,m-1);
    else return  binary_search(arr,n,key,m+1,e);
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int key=10;
    int n=sizeof(arr)/sizeof(arr[0]);
   int ans= binary_search(arr,n,key,0,n-1);
   if(ans==-1)
   {
    printf("element not found");
   }
   else
   {
    printf("element found at index %d",ans);
   }
}