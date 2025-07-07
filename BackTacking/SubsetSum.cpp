#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int>& arr, int n, int target,vector<vector<int>>&dp) {
    if (target == 0) return true;
    if (n < 0 || target < 0) return false;
    if(dp[n][target]!=-1) return dp[n][target];
    return dp[n][target] = solve(arr, n - 1, target - arr[n],dp) || solve(arr, n - 1, target,dp);
}

int main() {
    vector<int> arr = {1, 2, 3};
    int target = 4;
    int n = arr.size();
    // whether it's possible to form `target` using elements up to index `n`
    vector<vector<int>>dp(n+1,vector<int>(target+1,-1));

    if (solve(arr, n - 1, target,dp))
        cout << "Subset exists\n";
    else
        cout << "No subset found\n";

    return 0;
}
