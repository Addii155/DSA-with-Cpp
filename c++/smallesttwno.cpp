#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;

    if(x>y&y<z){
        cout<<"y is smallest"<<endl;
    }
    else if(y>z&z<x){
        cout<<"z is smllest"<<endl;
    }
    else{
        cout<<"x is smallest";
    }
}
return 0;
}