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
    for(int i=l;i<=r;i++)
    {
        swap(s[l],s[i]);
        permute(s,l+1,r); //recursive call to find all the permutations of the string
        swap(s[l],s[i]); //backtrack to the previous state
         //print the current permutation of the string
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
//  a s ->a s 