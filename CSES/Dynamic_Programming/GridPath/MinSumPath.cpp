#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long ll;
int solve(vector<vector<int>>&grid,int i,int j)
{
    if(i==0 && j==0) return grid[i][j]; 
    if(i<0) return INT_MAX; //if we go out of bound then return max value
    if(j<0) return INT_MAX; //if we go out of bound then return max value 
    return grid[i][j] + min(solve(grid,i-1,j) , solve(grid,i,j-1)); //recursive approach

}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>grid(n,vector<int>(n,0));
    for(auto &it:grid)
    {
        for(auto &i:it)
        {
            cin>>i;
        }
    }
    
    cout<<solve(grid,n-1,n-1);

}