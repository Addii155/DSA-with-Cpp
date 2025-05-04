#include<iostream>
using namespace std;
int c=0;
void printAllSub(int idx,string s,string t)
{
    if(idx==s.length())
    {
        if(t=="") cout<<"NULL"<<endl;
        cout<<t<<endl;
        c++;
        return;
    }
    printAllSub(idx+1,s,t);
    printAllSub(idx+1,s,t+s[idx]);
}
int main()
{
    string s="ADITYA";
    printAllSub(0,s,"");
    cout<<c<<endl;
}