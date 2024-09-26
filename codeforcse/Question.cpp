#include<bits/stdc++.h>
#include<math.h>
using namespace std;
// bool solve(){
//        int n;
//         cin >> n;
        
//         vector<long long> a(n); // Wealth of each person
//         long long sum = 0;
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//             sum += a[i]; // Calculate total wealth
//         }
            
//         if (n == 1) {
//             // If there is only one person, Robin Hood will never appear
//             cout << -1 << '\n';
//             continue;
//         }
        
//         // Find the richest person
//         long long max_wealth = *max_element(a.begin(), a.end());
        
//         // Calculate the required total wealth for Robin Hood to appear
//         // We need to make more than half of the population unhappy.
        
//         // Half of the total population means n/2 (as we need strictly more than half)
//         long long required_sum = max(sum, (2 * max_wealth + n - 1) / n * n); // Rounding the required sum up
        
//         // The difference between the required sum and the current total wealth
//         long long x = required_sum - sum;
        
//         // If x is negative or zero, Robin Hood will never appear
//         if (x <= 0) {
//             cout << 0 << '\n'; // No extra gold is needed
//         } else {
//             cout << x << '\n'; // The minimum x required for Robin Hood to appear
//         }
    
// }
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<long long> a(n); // Wealth of each person
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i]; // Calculate total wealth
        }
        
        if (n == 1) {
            // If there is only one person, Robin Hood will never appear
            cout << -1 << '\n';
            continue;
        }
        
        // Find the richest person
        long long max_wealth = *max_element(a.begin(), a.end());
        
        // Calculate the required total wealth for Robin Hood to appear
        // We need to make more than half of the population unhappy.
        
        // Half of the total population means n/2 (as we need strictly more than half)
        long long required_sum = max(sum, (2 * max_wealth + n - 1) / n * n); // Rounding the required sum up
        
        // The difference between the required sum and the current total wealth
        long long x = required_sum - sum;
        
        // If x is negative or zero, Robin Hood will never appear
        if (x <= 0) {
            cout << 0 << '\n'; // No extra gold is needed
        } else {
            cout << x << '\n'; // The minimum x required for Robin Hood to appear
        }
    
    }
    
}