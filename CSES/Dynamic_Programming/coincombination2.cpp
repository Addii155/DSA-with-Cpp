#include <iostream>
#include <algorithm>
#include <vector>
#include<climits>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll solve(vector<ll>&arr,int idx,ll m ,ll& n ,vector<vector<ll>>& dp)
{
    if(m==0) return 1;
    if(m<0) return 0;
    if(idx==n) return 0;
    if(dp[idx][m]!=-1) return dp[idx][m];
    ll ans=0;
 
    ans+=((solve(arr,idx,m-arr[idx],n,dp) +solve(arr,idx+1,m,n,dp) ))%MOD; ;
    return dp[idx][m] = ans%MOD;
}

ll solveTabulation(vector<ll>&arr,ll m,ll& n)
{
    vector<vector<ll>>dp (n+1, vector<ll>(m+1,0));
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=m;j++)
        {
            if(j==0) dp[i][j]=1;
            else if(j<arr[i]) dp[i][j]=dp[i+1][j];
            else dp[i][j]=(dp[i+1][j] + dp[i][j-arr[i]])%MOD;
        }
    }
    return dp[0][m]%MOD;
}
int main()
{
    ll n ,m;
    cin>>n>>m;
    // vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, -1));
    vector<ll> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // sort(arr.begin(),arr.end());
    ll ans=0;
    ans= solveTabulation(arr,m,n);
    cout<<ans<<endl;
    return 0;
}