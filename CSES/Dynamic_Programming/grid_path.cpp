#include <iostream>
#include <algorithm>
#include <vector>

#include<climits>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
// Time limit: 1.00 s
// Memory limit: 512 MB



// Consider an n \times n grid whose squares may have traps. It is not allowed to move to a square with a trap.
// Your task is to calculate the number of paths from the upper-left square to the lower-right square. You can only move right or down.
// Input
// The first input line has an integer n: the size of the grid.
// After this, there are n lines that describe the grid. Each line has n characters: . denotes an empty cell, and * denotes a trap.
// Output
// Print the number of paths modulo 10^9+7.
// Constraints

// 1 \le n \le 1000

// Example
// Input:
// 4
// ....
// .*..
// ...*
// *...

// Output:
// 3
ll solve(int i,int j,int n,vector<vector<int>>&dp,vector<vector<char>>&arr)
{
    if(i==0 && j==0 && arr[i][j]=='*') return 0;
    if(i==0 && j==0) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    ll top=0,left=0;
    if(arr[i][j]=='.' )
    {
        if(i-1>=0 && arr[i-1][j]=='.')
        {
            top=solve(i-1,j,n,dp,arr)%MOD;
        }
        if(j-1>=0 && arr[i][j-1]=='.')
        {
            left=solve(i,j-1,n,dp,arr)%MOD;
        }
    }
    return dp[i][j]= (top+left)%MOD;

}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    vector<vector<char>>arr(n+1,vector<char>(n+1));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    // for(auto it:arr)
    // {
    //     for(auto it2:it)
    //     {
    //         cout<<it2<<" ";
    //     }
    //     cout<<endl;
    // }
    ll ans=solve(n-1,n-1,n,dp,arr);
    cout<<ans<<endl;
    // dp[0][0]=1;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
            
    //     }
    // }
}