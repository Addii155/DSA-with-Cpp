#include<bits/stdc++.h>
using namespace std;

int findsqrt(int n){
    int s=0,e=n;
    int ans=0;
    while(s<=e){

        int m=s+(e-s)/2;
        if(m*m==n){
            return m;
        }
        else if(m*m<n){
            ans=m;
            s=m+1;
        }else{
            e=m-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
   double ans= findsqrt(n);

   double dec=.1;
    for(int i=0;i<7;i++)
    {
        while(ans*ans<=n)
        {
            ans=ans+dec;
        }
        ans=ans-dec;
       
        dec=dec/10;
    }

   cout<<"square root is"<<endl;
   cout<<ans;
}