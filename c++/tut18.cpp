#include<iostream>
using namespace std;
//factorial of a number
int factorial(int n){
    if(n<2)
    {
        return 1;
    }
return n*factorial(n-1);
}
int main(){
    int a;
    cout<<"enter a number"<<a<<endl;
    cin>>a;
    cout<<"factorial of a is \n"<<a<<"is"<<factorial(a)<<endl;
    return 0;
}
//factorial(4)=4*factorial(3); 
//factorial(4)=4*3*factorial(2);
//factorial(4)=4*3*2factorial(1);
//factorial(4)=4*3*3*2*1=24;