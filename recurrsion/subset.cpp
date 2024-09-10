#include<iostream>
using namespace std;
 // code to print all subsets of a string
 void subset(string ans,string originalstring)
 {
    if(originalstring==""){
        if(ans=="") 
            cout<<"empty string"<<"\n";
        else
        cout<<ans<<"\n";
        return;
    }
    subset(ans,originalstring.substr(1));
    subset(ans+originalstring[0],originalstring.substr(1));
    
 }
int main()
{
    string s="abc";
    cout<<"Subsets are:\n";
    subset("",s);
    return 0;
} 
