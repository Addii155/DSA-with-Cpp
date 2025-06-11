#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll findNCr(ll n,ll r)
{
    ll res=1;
    for(int i=0;i<r;i++)
    {
        res=res * (n- i);
        res = res/(i+1);
    }
    return res;
}
void PrintNthPascalRow(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<findNCr(n-1,i-1)<<" ";
    }
    // Time Complexity (N*r)
}

void OptimisePrintNthPascalRow(int row)
{
    ll ans=1;
    cout<<1<<" ";
    for(int i=1;i<row;i++)
    {
        ans= ans * (row-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}

int main()
{
    int n,r;
    cout<<"Enter value of n : ";
    cin>>n;
    // cout<<endl;
    // cout<<"enter value of r :  ";
    // cin>>r;
    // cout<<findNCr(n-1,r-1)<<endl;
    OptimisePrintNthPascalRow(n);
}
