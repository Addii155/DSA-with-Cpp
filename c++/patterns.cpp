#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
              cout<<"*";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print1(int n){
    for(int i=0;i<n;i++){
        //space
        
            for(int j=0;j<n-1-i;j++){
                cout<<" ";
            }
            for(int j=0;j<(2*i-1);j++){
                cout<<"*";
            }
                     for(int j=0;j<n-1-j;j++){
                cout<<" ";
            }
            cout<<endl;
            
        
    }
}
void print4(int n){
    int star=1;
    for(int i=0;i<n;i++){
        if(i%2==0)star=1;
        else star=0;
        for(int j=0;j<=i;j++){
            cout<<star;
            star=1-star;
        }
        cout<<endl;
    }}
    void print5(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            } 
            for(int j=1;j<2*n-(2*i-2);j++){
                cout<<" ";
            }            for(int j=i;j>=1;j--){
                cout<<j;
            }
            cout<<endl;

        }
    }
    void print6(int n){
        int num=1;        for(int i=1;i<=n;i++){
           for(int j=1;j<=i;j++){
            cout<<num;
            num=num+1;
           }
           cout<<endl;
        }
    }

    void print2(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
         for(int j=0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
        }

}

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    print3(n);
print(n);

print1(n);
print2(n);
print4(n);
print5(n);
print6(n);}
return 0;
}