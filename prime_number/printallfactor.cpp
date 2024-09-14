#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    for(int i=sqrt(n);i>=1;i--)
    { 
        if(n%i==0 && i!=sqrt(n))
        cout<<n/i<<endl;
    }
}