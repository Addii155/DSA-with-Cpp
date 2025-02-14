#include <bits/stdc++.h>
using namespace std;

int solveTopDown(int weight[], int value[], int amount, int n, vector<vector<int>> &dp)
{
    if (n == 0)
    {
        if (weight[n] <= amount)
        {
            return dp[n][amount] = value[n];
        }
        else
            return dp[n][amount] = 0;
    }
    if (amount == 0)
        return dp[n][amount] = 0;
    int include = 0, exclude = 0;
    if (dp[n][amount] != -1)
        return dp[n][amount];
    if (weight[n] <= amount)
    {
        include = value[n] + solveTopDown(weight, value, amount - weight[n], n - 1, dp);
    }
    exclude = solveTopDown(weight, value, amount, n - 1, dp);
    return dp[n][amount] = max(include, exclude);
}
// Tabulation Method

int solveBottomUP(int weight[], int value[], int amount, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 0));
    
    for (int i = 0; i <= n; i++) // i represents item upto current index
    {
        for (int j = 0; j <= amount; j++) // j represents the current capacity
        {
            if( i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else{

                if( weight[i-1] > j) dp[i][j]=dp[i-1][j];
                else
                dp[i][j]=max(dp[i-1][j], j-weight[i-1]>=0 ? dp[i-1][j-weight[i-1]]+value[i-1]:0);
            }
        }
    }

    return dp[n][amount]; 
}

int main()
{
    int weight[] = {1, 2, 3, 4};
    int value[] = {1, 4, 6, 8};
    int W = 7;
    int n = sizeof(weight) / sizeof(weight[0]);
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    int ans = 0;
    //  ans=solveTopDown(weight, value, W, n-1, dp);
    ans = solveBottomUP(weight, value, W, n);
    cout << ans << endl;
}