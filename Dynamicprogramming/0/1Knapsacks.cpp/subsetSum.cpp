#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={1,2,3};
    int Target=4;
    int n=3;
    vector<vector<bool>>dp(n+1,vector<bool>(Target+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=Target;j++)
        {
            if(j==0) dp[i][j]=1;
            else if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    for(auto it:dp)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}