#include<iostream>
#include<limits.h>
using namespace std;

int maxsegement(int n,int &a,int &b){
    if(n==0) return 0;
    if(n<0) return INT_MIN;
    int x=maxsegement(n-a,a,b)+1;
    int y=maxsegement(n-b,a,b)+1;
    return max(x,y);
}
int main(){
    int n=8;
    int a=2;
    int b=3;
    cout<<maxsegement(n,a,b);
}