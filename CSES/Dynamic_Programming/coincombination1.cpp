#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, money;
    cin >> n >> money;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize DP array
    vector<int> dp(money + 1, 0);
    dp[0] = 1; // Base case: 1 way to make amount 0 (use no coins)

    // Iterative DP: Calculate number of ways to make each amount
    for (int i = 0; i < n; i++) {
        for (int j = arr[i]; j <= money; j++) {
            dp[j] = (dp[j] + dp[j - arr[i]]) % MOD;
        }
    }

    // Output result
    cout << dp[money] << '\n';
    return 0;
}
