#include<bits/stdc++.h>
using namespace std;
# define ll long long
int gcdFun(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcdFun(b%a,a);
}
int main()
{
    int ans=gcdFun(27,45);
    cout<<ans<<endl;
}