#include<iostream>
using namespace std;
int add(int a,int b
){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
int cylinder(int r,int h){
    return 3.14*r*r*h;
}
int cube(int a)
{
    return a*a*a;
}
int cuboid(int l,int b,int h){
    return l*b*h;
}
int main()
{
cout<<"the sum of 3 and 6 is "<<add(3,6)<<endl;
cout<<"the sum of 3 and 6 and 8 is "<<add(3,6,8)<<endl;
cout<<"the volume of cylinder of r= 3 ,h= 8 is "<<cylinder(3,8)<<endl;
cout<<"the volume of cube a= 3  is "<<cube(3)<<endl;
cout<<"the volume of cuboid l= 3 and b=6 and h=8 is "<<cuboid(3,6,8)<<endl;
return 0;
}