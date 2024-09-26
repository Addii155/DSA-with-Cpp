#include<stdio.h>
int main()
{
    int arr[]={7,4,2,7,8,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
   // inserrtion sort
   for(int i=1;i<n;i++)
   {
    int j=i-1;  // start from i-1
    int key=arr[i]; // store the current element
    while(j>=0 && arr[j]>key) // if j>=0 and arr[j]>key
    {
        arr[j+1]=arr[j]; // arr[j+1]=arr[j]
        j--;               // j--
    }
    arr[j+1]=key;     
    for(int i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
    printf("\n");
    
   }
    
}