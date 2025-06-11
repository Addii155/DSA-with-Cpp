#include <iostream>
using namespace std;

int convert_BinarytoDecimal(string str)
{
    int result = 0;
    int n = str.length();
    for (int i = n - 1; i >= 0; i--)
    {
        char ch = str[i];
        int num = ch - '0';
        cout<<num<<" ";
        result = result + num * (1 << (n - i - 1)); 
    }
    return result;
}
int main()
{
    // string str = "1010";
    // cout << convert_BinarytoDecimal(str)<<endl;
    // return 0;
    cout<<(1>>(8))<<endl;
}