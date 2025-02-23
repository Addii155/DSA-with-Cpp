#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number upto which you want to find prime numbers"<<endl;
    cin>>n;
    vector<bool>isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=0;i<n;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(isPrime[i]) cout<<i<<" ";
    }
}