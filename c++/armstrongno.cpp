#include<iostream>
using namespace std;
int main()
{
int sum=0;
int n,ld;
cin>>n;
int num=n;
while (n>0)
{
    ld=n%10;
    sum=sum+(ld*ld*ld);
    n=n/10;
}
if(sum==num){
    cout<<"no is armstrong no";
}
else
cout<<"not armstrong";

return 0;
}