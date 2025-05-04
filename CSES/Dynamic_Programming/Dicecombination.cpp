#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
vector<int>dp;
int mod=1e9 + 7;
int Dice(int n ,vector<int>& arr)
{
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int temp=0;
    for(auto it:arr)
    {
        if(n-it>=0)
        temp= (temp + Dice(n-it,arr))%mod;
    }
    return dp[n]= temp%mod;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr={2,3,5};
    dp.resize(1e6+1,-1);
    int ans=Dice(n,arr);
    cout<<ans<<'\n';
   
}