#include<iostream>
#include<limits.h>
using namespace std;
int mincoin(int arr[],int n,int am)
{
    if(am==0)
    return 0;
    if(am<0)
    {
        return INT_MAX;
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int temp=mincoin(arr,n,am-arr[i]);
        if(temp!=INT_MAX)
        {
            ans=min(ans,temp+1);
        }
    }
    return ans;
}
int main()
{k
    int arr[]={2,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int amount=8;
    int ans= mincoin(arr,n,amount);
    cout<<ans<<endl;
}