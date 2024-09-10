#include<bits/stdc++.h>
using namespace std;
# define ll long long
void Subarray(vector<int>v,int arr[],int n,int idx)
{
    if(idx==n)
    {
        for(auto x:v)
        cout<<x<<" ";
        cout<<"\n";
        return;
    }
    Subarray(v,arr,n,idx+1);
    if(v.size()==0 || arr[idx-1]==v.back())
    {
        v.push_back(arr[idx]);
         Subarray(v,arr,n,idx+1);
    }   
}
int main()
{
    int arr[]={1,2,3,4};
    vector<int>v;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Subarray are: \n";
    Subarray(v,arr,n,0);
}