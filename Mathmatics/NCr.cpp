#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,r;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<endl;
    cout<<"enter value of r :  ";
    cin>>r;
    ll res=1;
    for(int i=0;i<r;i++)
    {
        res= res * (n-i);
        res= res/ (i+1);
    }
    cout<<"value of "<<n<<"C"<<r<<"=> " <<res<<endl; 

}

// NCr= N!/r!*(N-r)! 

// 10C4 = 10 * 9 * 8 * 7    (10 - 4+1) = 6
// r =   4 * 3 * 2 * 1      