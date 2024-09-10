#include<iostream>
using namespace std;
int main()
{
int n,lastdigit,rev=0,N;
cin>>n;
N=n;
while(n>0){
    lastdigit=n%10;
        n=n/10;
        rev=rev*10+lastdigit;

}if(N==rev){
   cout<<"no is palindrome";
}
else
cout<<"no";

return 0;
}