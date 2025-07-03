#include<bits/stdc++.h>
using namespace std;

bool solve(int arr[],int idx,int& n)
{
    if(idx==n-1) return true;
    if(idx>n-1) return false;
    for(int i= 1; i < = arr[idx];i++)
    {
        bool res=solve(arr,idx+i,n);
        return res;
    }
    return false;
}

int main()
{
    int arr[]={2,3,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    solve(arr,0,n);
}