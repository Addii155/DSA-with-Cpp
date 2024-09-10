#include<iostream>
#include<vector>
using namespace std;
bool isprime(int n){
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
        return false;
        }
    }
    if(flag==0) return true;

}
int main()
{
// sieve of eratostenes
int n,count=0;
cin>>n;
vector<int>prime(n+1,true);
prime[0]=prime[1]=false;
for(int i=2;i<n;i++){
    if(isprime(i)){ count++;
    for(int j=2*i;j<n;j=j){
        prime[j]=0;
    }
}}
cout<<count<<endl;
return 0;
}