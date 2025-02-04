#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7};
    for(auto it:a) cout<<it<<" ";
    cout<<endl;
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    //  right rotate
        k=k%n;
        k=n-k;
        int arr[k];
         for(int i=0;i<k;i++)
        {
            arr[i]=a[i];
        } 
       
        for(int i=0;i<n-k;i++)
        {
            a[i]=a[i+k];
        } 
    
        for(int i=0;i<k;i++)
        {
            a[i+(n-k)]=arr[i];
        }
        for(auto it:a) cout<<it<<" ";
        cout<<endl;

       // left rotate using extra array
        int b[]={1,2,3,4,5,6,7};
        int brr[k];
        for(int i=0;i<k;i++)
        {
            brr[i]=b[i+(n-k)];
        }
        for(int i=0;i<n-k;i++)
        {
            b[n-1-i]=b[n-k-i-1];
        }
        for(int i=0;i<k;i++)
         b[i]=brr[i];
          for(auto it:b) cout<<it<<" ";
}