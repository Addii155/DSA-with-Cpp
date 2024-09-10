#include<iostream>
#include<math.h>
using namespace std;
int square(int n){
    return n*n;}
 float area(int r){
    return 3.14*square(r);
 }   
 float circum(int r)
   {
    return 2*3.14*r;
   }
int main()
{
     for(int i=1;i<=5;i++)

    cout<<square(i)<<endl;
cout<<area(3)<<" ";
cout<<circum(3)<<" ";


}