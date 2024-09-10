#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
string s=to_string(num);
if(num>=0) sort(s.begin(),s.end());
else sort(s.begin(),s.end(),greater<char>()); 
if(num>0)
{
    int ind=s.find_first_not_of('0');
    swap(s[0],s[ind]);
}
int ans=stoi(s);
if(num<0) ans*=-1;
 
 cout<<ans<<endl;
return 0;
}