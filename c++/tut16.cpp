#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return c;
}
//call byreference using pointer
int swappointer(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}//call byreference using pointer using reference variable
int swapreferencevar(int &a,int& b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a;
}
int main()
{
    int a=3,b=4;
//cout<<"the sum of 3 and 4 is \n"<<sum(a,b)<<endl;
cout<<"the value of a is\n"<<a<<endl;
cout<<"the value of b is\n"<<b<<endl;
//swappointer(&a,&b); this will swap the value of a and b
swap(a,b);
cout<<"after swap\n";
cout<<"the value of a  is \n"<<a<<endl;
cout<<"the value of b is \n"<<b<<endl;
return 0;
}