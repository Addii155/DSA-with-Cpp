#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not prime." << endl;
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << n << " is not prime." << endl;
            return 0;
        }
    }

    cout << n << " is prime." << endl;
    return 0;
}

// 16 -> 1, 2, 4, 8, 16 for non-prime there are always odd number of factors
// 17 -> 1, 17 for prime there are always even number of factors
// 18 -> 1, 2, 3, 6, 9, 18 for non-prime there are always odd number of factors

// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)
// 1 is not prime, 2 is prime,
//  3 is prime, 4 is not prime, 5 is prime,
//  6 is not prime, 7 is prime, 8 is not prime, 
// 9 is not prime, 10 is not prime, 11 is prime, 
// 12 is not prime, 13 is prime, 14 is not prime,
//  15 is not prime, 16 is not prime, 17 is prime