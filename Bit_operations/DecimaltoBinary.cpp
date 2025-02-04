#include<iostream>
using namespace std;

string Decimal_To_Binary(int n){
    string s="";
    while(n>0)
    {
        if(n%2==0)
        {
            s="0"+s;
        }
        else s="1"+s;
        n=n>>1; 
    }
    return s;
}
int main()
{
    
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<Decimal_To_Binary(n)<<endl;
}