#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int solve(int i,int j,string& s,string& t,vector<vector<int>>& dp)
{
    if(i==-1) return j+1;
    if(j==-1) return i+1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==t[j]) return solve(i-1,j-1,s,t,dp);
    int add=solve(i,j-1,s,t,dp);
    int dele=solve(i-1,j,s,t,dp);
    int replace=solve(i-1,j-1,s,t,dp);
    return dp[i][j]= 1+min({add,dele,replace});
}

int main()
{
    string s,t;
    cin>>s>>t;
    int n=s.size(),m=t.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
   cout<< solve(s.size()-1,t.size()-1,s,t,dp);

}