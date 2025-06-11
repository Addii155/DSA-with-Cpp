#include <bits/stdc++.h>
using namespace std;
void permute(string &s,int l,int r)
{
    if(l==r) //base case when the left index is equal to the right index
    {
        cout<<s<<endl; //print the current permutation of the string
        return;
    }
    // cout<<s<<endl; //print the current permutation of the string
    unordered_map<char,int>mp;
    for(int i=l;i<=r;i++)
    {
        if(mp.count(s[i])==1) continue;
        swap(s[l],s[i]);
        mp[s[i]]++;
        permute(s,l+1,r); //recursive call to find all the permutations of the string
        swap(s[l],s[i]); //backtrack to the previous state
    }
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    permute(s,0,s.size()-1); 
    return 0;
}
//  a s ->a s 