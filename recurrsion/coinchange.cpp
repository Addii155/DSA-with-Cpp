#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int mincoin(int arr[],int n,int am ,vector<int>&dp)
{
    if(am==0)
    return 0;
    if(am<0)
    {
        return INT_MAX;
    }
    if(dp[am]!=INT_MAX) return dp[am];
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int temp=mincoin(arr,n,am-arr[i], dp);
        if(temp!=INT_MAX)
        {
            ans=min(ans,temp+1);
        }
    }
    dp[am]=ans;
    return dp[am];
}

int main()
{
    int arr[]={3,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int amount=8;
    vector<int>dp(amount+1,INT_MAX);
    int ans= mincoin(arr,n,amount,dp);
    if(ans==INT_MAX) cout<<"Not Possible\n";
    else
    cout<<ans<<endl;
    for(auto it:dp)
    {
        cout<<it<<" ";
    }
}