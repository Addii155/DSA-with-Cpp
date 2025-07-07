#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&wt,vector<int>vl,int W,int N,vector<vector<int>>&dp)
{
    if( N<0 || W <= 0 ) return 0;
    if(wt[N]>W)
    {
        return dp[N][W] = solve(wt,vl,W,N-1,dp);
    }
    else{ 

        return dp[N][W] = max(solve(wt,vl,W,N-1,dp),vl[N]+solve(wt,vl,W-wt[N],N-1,dp));
    }
    dp[N][W];
}

int main()
{
    vector<int>wt={1,2,3};
    vector<int>vl={2,3,5};
    int W=4;
    int N=wt.size();
    vector<vector<int>>dp(N+1,vector<int>(W+1,0));
    // cout<< solve(wt,vl,W,N-1,dp);
    // for(int i=1;i<=N;i++)
    // {
    //     for(int j=1;j<=W;j++)
    //     {
    //         if(wt[i-1]<=j)
    //         {
    //             dp[i][j] = max(dp[i-1][j],vl[i-1]+ dp[i-1][j-wt[i-1]] );
    //         }
    //         else dp[i][j]=dp[i-1][j];
    //     }
    // }
    for(int i=N-1;i>=0;i--)
    {
        for(int j=0;j<=W;j++)
        {
            if(wt[i]<=j)
            {
                dp[i][j] = max(dp[i+1][j], vl[i]+ dp[i+1][j-wt[i]]);
            }
            else
            {
                dp[i][j]=dp[i+1][j];
            }
        }
    }
    for(auto it:dp)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    // cout<<dp[0][W];
}