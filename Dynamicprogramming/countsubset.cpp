#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={2,2,3};
    int n=arr.size();
    int sum=5;
    vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
    for(int i=0;i<=n;i++) dp[i][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0 && j==0) dp[i][j]=1; 
            if(arr[i-1]<=j)
            dp[i][j]=dp[i-1][j-arr[i-1]];
            
            dp[i][j]+=dp[i-1][j];
        }
    }
    cout<<"ans->"<<dp[n][sum]<<endl;
}