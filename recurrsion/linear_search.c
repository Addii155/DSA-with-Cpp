#include<stdio.h>
int linear_search(int arr[],int n,int key,int i)
{
    if(i==n) return -1;
    if(arr[i]==key) return i;
    return linear_search(arr,n,key,i+1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int key=10;
    int n=sizeof(arr)/sizeof(arr[0]);
   int ans= linear_search(arr,n,key,0);
   if(ans==-1)
   {
    printf("element not found");
   }
   else
   {
    printf("element found at index %d",ans);
   }
}