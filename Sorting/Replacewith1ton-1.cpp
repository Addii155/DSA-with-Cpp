#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={19,12,23,8,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n,0);
    int x=0;
      for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<n;i++)
   {
    int min=INT_MAX;
    int idx=-1;
    for(int j=0;j<n;j++)
    {
        if(v[j]==1) continue;
        else{
            if(arr[j]<min)
           {
             min=arr[j];
            idx=j;
            }
        } 
    }
    arr[idx]=x++;
    v[idx]=1;
   }
     for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }cout<<endl;
 
}