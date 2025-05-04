#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

long long int solve(vector<int>&arr,int m,int& n,vector<ll>&dp)
{
    if(m==0) return 1;
    if(m<0) return 0;
    if(dp[m]!=-1) return dp[m];
    long long ans=0;
    for(auto it:arr)
    {
        ans+=solve(arr,m-it,n,dp);
    }
    return dp[m] = ans%MOD;
}

long long int solveTabulation(vector<int>&arr,int m,int& n)
{
   vector< ll > dp(m+1,0);
   dp[0]=1;
   for(int i=1;i<=m;i++)
   {
         for(auto it:arr)
         {
            if(i>=it)
            {
                dp[i] = (dp[i] + dp[i-it])%MOD;
            }
         }
        } 
    return dp[m];
}

int main() {
    int n, money;
    cin >> n >> money;
    // vector<ll>dp(money+1,-1);
    vector<int> arr(n);
    long long int ans;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //  ans=solve(arr,money,n,dp);
    ans=solveTabulation(arr,money,n);
    cout<<ans%MOD<<endl;
}
