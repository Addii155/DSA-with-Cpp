#include<bits/stdc++.h>
using namespace std;
int main()
{
    float arr[]={5,2,10};
    float mn=INT_MAX;
    float mx=INT_MIN;
    bool flag=true;
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int  i = 1; i < n; i++)
    {
        if(arr[i-1]-arr[i]>=0)
        {
            mx=ceil(max(mx,(arr[i-1]+arr[i])/2));
        }
        else{
            mn=min(mn,(arr[i-1]+arr[i])/2);
        }
        if(mn<mx)
        {
           flag=false;
           break;
        }
    }if(!flag) cout<<-1<<endl;
    else
    cout<<mx<<" "<<mn<<endl;
}