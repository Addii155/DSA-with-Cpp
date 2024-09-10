#include<iostream>
using namespace std;
void f(int i,int n){
    if(i>n){
        return;
    }
    cout<<"aditya"<<endl;
    f(i+1,n);
}
void f1(int i,int n){
    if(i<1){return;}
   f1(i-1,n);
    cout<<i<<endl;
}
void f3(int i,int n){
    if(i>n){return;}
    f3(i+1,n);
    cout<<i<<endl;
}
void f4(int i,int sum){
    if(i<1){
      cout<<sum<<endl;
        return;}
        f4(i-1,sum+i);

}
int f2(int n){
    if(n==0){return 0;}
    return n+f2(n-1);
}int f5(int n){
    if(n==0){return 1;}
    
    return n*f5(n-1);
}
int main()
{
int n,i;
cin>>n;
f(1,n);
f1(n,n);
f3(1,n);
f4(n,0);
cout<<f2(n)<<endl;
cout<<f5(n);
return 0;
}