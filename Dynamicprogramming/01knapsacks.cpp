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
    for (int wt = 0; wt <= amount; wt++)
    {
        if (weight[0] <= wt)
        {
            dp[0][wt] = value[0];
        }
        else
            dp[0][wt] = 0;
    }
    for (int i = 1; i < n; i++) // i represents the current item index
    {
        for (int j = 0; j <= amount; j++) // j represents the current capacity
        {
            int include = 0, exclude = 0;
            if (weight[i] <= j)
            {
                include = value[i] + dp[i][j - weight[i]]; // Include item i
            }
            exclude = dp[i][j];                   // Exclude item i
            dp[i + 1][j] = max(include, exclude); // Store result in i+1 row
        }
    }

    return dp[n][amount]; // Answer is in dp[n][amount] (1-based indexing)
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