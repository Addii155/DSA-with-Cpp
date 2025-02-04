#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int>dp(10000001,-1);

vector<int> helper(int n)
{
    vector<int>a;
    while(n>0)
    {
        if(n%10!=0)
        a.push_back(n%10);
        n/=10;
    }
    return a;
}

int solve(int n)
{
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int>digi=helper(n);
    int res=INT_MAX;
    for(auto it:digi)
    {
        res=min(res,solve(n-it));
    }
    return dp[n]= res+1;
}

int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<solve(n)<<endl;

}