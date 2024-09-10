#include<iostream>
using namespace std;
int sum(int ,int);
//function prototype
//type function name(argument);

int main()
{
    int num1,num2; 
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    //actual parmeter are the value which passed to the funtion when function is called
    //num 1,num2 are actual parameter
    cout<<"the value of sum is "<<sum(num1,num2)<<endl;
    return 0;
}
int sum(int a, int b){
int c=a+b;
//formal parameter a and b will be taking values from actual parameter num1 and num2.
//formal parameter are defined in the only.

return c;
}
