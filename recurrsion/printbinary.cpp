#include<bits/stdc++.h>
using namespace std;
# define ll long long
void getbinary(string ans,int n)
{
    if(n==0)
    {
        cout<<ans<<endl;
        return;
    }
    getbinary(ans+"0",n-1);
    getbinary(ans+"1",n-1);
    getbinary(ans+"2",n-1);
    getbinary(ans+"3",n-1);
    getbinary(ans+"4",n-1);
    getbinary(ans+"5",n-1);
    getbinary(ans+"6",n-1);
    getbinary(ans+"7",n-1);
    getbinary(ans+"8",n-1);
    getbinary(ans+"9",n-1);
}
int main()
{
   string ans="";
   int n=2;
   getbinary(ans,n);
}