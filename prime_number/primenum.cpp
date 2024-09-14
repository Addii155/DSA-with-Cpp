#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int n)
{
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++)
    
        if(n%i==0) return false;
    return false;
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    if(isprime(n))
    cout<<"Prime number";
    else
    cout<<"Not a prime number";
}