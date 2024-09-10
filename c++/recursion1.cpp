#include<iostream>
using namespace std;
int f(int i,int n){
if(i<1) return 0;
cout<<i<<" ";
f(i-1,n);

}
void f1(int i,int n){
    if(i>n) return;
    f1(i+1,n);
    cout<<endl;
    cout<<i<<" ";
}
void f2(int i,int sum){
    if(i<1)   {  cout<<sum<<endl;
    
    return  ;}
    f2(i-1,i+sum);

}
int f3(int n){
    if(n==0) {return 0;}
    else
    return n+f3(n-1);
}
int f4(int n){
    if(n==1){
        return 1;
    }
    else
    return n*f4(n-1);
}
int f5(int n){
    if(n<=1) return n;
    else return f5(n-1)+f5(n-2);
}
int main()
{
int i,n;
cin>>n;
//f(i,n);
 //f1(1,n);
   f2(3,0); 
//cout<<f3(n);
//cout<<f4(n);
//cout<<f5(n);
return 0;
}