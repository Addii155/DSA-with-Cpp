#include<stdio.h>
int main()
{
    int arr[]={7,4,2,7,8,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i];
       while(j>-1)
        {
            if(arr[j]>=temp)
            { 
              arr[j+1]=arr[j]; 
            }
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
}