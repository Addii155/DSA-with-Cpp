#include<bits/stdc++.h>
using namespace std;
# define ll long long
 
void recr(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    recr(n-1);
    cout<<n<<" ";
    recr(n-1);
    cout<<n<<" ";
}


int main()
{
    recr(3);
}