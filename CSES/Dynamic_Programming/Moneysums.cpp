#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    ll s = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i];
    }

    vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
    dp[0][0] = true; // Base case

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            dp[i][j] = dp[i - 1][j]; // Don't include arr[i-1]
            if (j >= arr[i - 1]) {
                dp[i][j] = dp[i][j] || dp[i - 1][j - arr[i - 1]]; // Include arr[i-1]
            }
        }
    }

    set<int> st; // <-- changed from unordered_set to set
    for (int j = 1; j <= s; j++) {
        if (dp[n][j]) {
            st.insert(j);
        }
    }

    cout << st.size() << "\n";
    for (int val : st) {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}
