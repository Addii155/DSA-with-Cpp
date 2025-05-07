#include <bits/stdc++.h>
using namespace std;
void permute(string &s,int l,int r)
{
    for(int i=l;i<=r;i++)
    {
        swap(s[l],s[i]);
        permute(s,l+1,r); //recursive call to find all the permutations of the string
        // swap(s[l],s[i]); //backtrack to the previous state
        cout<<s<<endl; //print the current permutation of the string
    }
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    permute(s,0,s.size()-1); //function to find all the permutations of the string
    return 0;
}