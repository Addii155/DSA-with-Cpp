#include<bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<__builtin_popcount(10)<<endl;  // set bit are number of 1 in binary representation of a number
    //  // it is a built in function in c++
     
    //  int n;
    //  cout<<"enter the number"<<endl;
    //  cin>>n;
    //  int cnt=0;
    //  while(n>0)
    //  { 
    //     n=n&(n-1);   // brain kernighan algorithm to count set bit 
    //     cnt++;
    //  }
    //  cout<<cnt<<endl;
    cout<<__builtin_ctzll(16)<<endl; // count trailing zeros
    cout<<__builtin_clzll(16)<<endl; // count leading zeros
     return 0;
}