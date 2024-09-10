#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int k=1;
    // left rotate
        //    k=n-k;
       
        // int arr[k];
        //  for(int i=0;i<k;i++)
        // {
        //     arr[i]=a[i];
        // } 
       
        // for(int i=0;i<n-k;i++)
        // {
        //     a[i]=a[i+k];
        // } 
      
        
        // for(int i=0;i<k;i++)
        // {
        //     a[i+(n-k)]=arr[i];
        // }
        

        // right rotate
        int arr[k];
        for(int i=0;i<k;i++)
        {
            arr[i]=a[i+(n-k)];
        }
        for(int i=0;i<n-k;i++)
        {
            a[n-1-i]=a[n-k-i-1];
        }
        for(int i=0;i<k;i++)
         a[i]=arr[i];
          for(auto it:a) cout<<it<<" ";
}