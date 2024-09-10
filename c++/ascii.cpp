#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    // for upper triangular
    for (int line = 1; line <= n; line++)
    {
        int space = n - line;
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        int no_of_char = 2 * line - 1;
        for (int j = 0; j < no_of_char; j++)
        {
            char ch = (char)('A' + j);
            cout << ch;
        }
        cout << "\n";
    }
    // for lower triangle
    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        int no_of_space = line - n;
        for (int k = 0; k < no_of_space; k++)
        {
            cout << " ";
        }
        int no_of_chars = 2 * (2 * n - line) - 1;
        for (int j = 0; j < no_of_chars; j++)
        {
            char ch = (char)('A' + j);
            cout << ch;
        }
        cout << "\n";
    }
    return 0;
}