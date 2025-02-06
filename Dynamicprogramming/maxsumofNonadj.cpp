#include<iostream>
using namespace std;

int maxsum(int arr[],int n,int i,int sum)
{
    if(i>n-1) return 0;
    //base case
    // include current element
    int left = arr[i] + maxsum(arr,n,i+2,sum+arr[i]);

    //exclude current element
    int right = maxsum(arr,n,i+1,sum);
    return max(left,right);
}
int main()
{
    int arr[]={1,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxsum(arr,n ,0 ,0);
}