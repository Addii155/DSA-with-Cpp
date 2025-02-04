#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
vector<int>arr,dp;
int min_coin(int n)
{
    if(n==0) return 0;
    if(n<0) return INT_MAX;
    if(dp[n]!=-1) return dp[n];
    int ans=INT_MAX;
    for(auto it:arr)
    {
        int temp=min_coin(n-it);
        if(temp!=INT_MAX)
        {
            ans=min(ans,temp+1);
        }
    }
    return dp[n]= ans;
}
int main()
{
    int n,money;
    cin>>n>>money;
    arr.resize(n);
    dp.resize(money+1,-1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=min_coin(money);
    if(ans==INT_MAX)
    {
        cout<<-1<<endl;
    }else 
    {
        cout<<ans<<'\n';
    }
}