#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>price(n),pages(n);
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>pages[i];
    }
    vector<int>prev(x+1,0);
    for(int i=1;i<=n;i++ )
    {
        vector<int>curr(x+1,0);
        for(int j=1;j<=x;j++)
        {
            if(j>=price[i-1])
            {
                curr[j]=max(prev[j],prev[j-price[i-1]]+pages[i-1]);
            }
            else curr[j]=prev[j];
        }
        prev=curr;
    }
    cout<< prev[x]<<endl;
}