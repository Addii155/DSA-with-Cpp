#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(ll prev, vector<ll>& arr, ll idx, vector<vector<ll>>& dp) {
    if (idx == (ll)arr.size()) return 0;
    if (dp[idx][prev + 1] != -1) return dp[idx][prev + 1];

    ll take = 0, notTake = 0;
    if (prev == -1 || arr[prev] < arr[idx]) {
        take = 1 + solve(idx, arr, idx + 1, dp); // Correct: idx becomes new prev
    }
    notTake = solve(prev, arr, idx + 1, dp);

    return dp[idx][prev + 1] = max(take, notTake);
}
int main()
{
    ll  n;
    cin>>n;
    vector<ll>arr(n);
    for(auto &it:arr)   
    {
        cin>>it;
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 5, 0));
    // Top-down approach
    // ll ans= solve(-1,arr,0,dp); // Recursive approach
    cout<<ans<<endl;
    // for (int i = n - 1; i >= 0; i--) {
    //     for (int prev = i - 1; prev >= -1; prev--) {
    //         ll take = 0;
    //         if (prev == -1 || arr[prev] < arr[i]) {
    //             take = 1 + dp[i + 1][i + 1];
    //         }
    //         ll notTake = dp[i + 1][prev + 1];
    //         dp[i][prev + 1] = max(take, notTake);
    //     }
    // }

    // cout << dp[0][0] << endl;
    return 0;
}