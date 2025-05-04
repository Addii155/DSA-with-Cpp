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

    for (int i = 2; i * i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << n << " is not prime." << endl;
            return 0;
        }
    }

    cout << n << " is prime." << endl;
    return 0;
}