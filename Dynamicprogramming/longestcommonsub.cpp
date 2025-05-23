#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="AEDFHR";
    string s2="ABCDGH";
    int m=s1.length();
    int n=s2.length();
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    for(int i=0;i<=m;i++) dp[i][0]=0;
    for(int i=0;i<=n;i++) dp[0][i]=0;

    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    cout<<"longest common subsequence is "<<dp[m][n]<<endl;
    string longestSubsequence="";
    int i=m,j=n;
    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            longestSubsequence=s1[i-1]+longestSubsequence;
            i--;j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
    cout<<"longest common subsequence is "<<longestSubsequence<<endl;
}