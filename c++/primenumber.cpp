#include<iostream>
using namespace std;
bool isprime(int num){
    for(int i=2;i*i<=num;i++){
        if(num%2==0){
        return false;
    }
    else{

        return true;
    }}
}
int main()
{
int a=2,b=40;
for(int i=a;i<=b;i++)
{if(isprime(i)){
cout<<i<<" ";}
}
return 0;
}