#include<iostream>
using namespace std;
int fib(int n){
    if(n<2)
    {
        return 1;
    }
    else{
    return fib(n-2)+fib(n-1);
    }
}
int main()
{
int a;
cout<<"enter a number"<<endl;
cin>>a;
cout<<"\n the fibonecci series is as follow \n"<<endl;
for(int i=0;i<a;i++){
    cout<<fib(i)<<endl;
}
return 0;
}