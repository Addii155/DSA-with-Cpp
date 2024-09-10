#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int q;
    cin>>q;
    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']+=1;
    }
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }

return 0;
}