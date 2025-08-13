#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int a=2,b=10;
    int ans=1;
    while(b)
    {
        if(b%2==1)
        {
            ans=ans*a;
        }
        b=b/2;
        a=a*a;
    }
    cout<<ans<<endl;
}