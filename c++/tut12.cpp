#include<iostream>
using namespace std;
int main()
{
//what is a pionter 
// a data type which hold the address of other data type
int a=8;
int*p=&a;
int b=7;
int**q=&p; 
int***r=&q;
cout<<*p<<endl;
cout<<***r<<endl;
cout<<**q<<endl;
return 0;
}