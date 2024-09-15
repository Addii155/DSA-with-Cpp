#include<iostream>
using namespace std;

int main()
{
    long long int n=23;
    int temp=n;
    // n=n| n>>1;
    // n=n| n>>2;
    // n=n| n>>4;
    // n=n| n>>8;
    // n=n| n>>16;
    // n=temp^n;
    int x;
    while (temp>0)
    {
        x=temp;
        temp=temp&(temp-1);
    }
    x=2*x-1;
    int ans=x^n;
    cout<<ans<<endl;
    
}