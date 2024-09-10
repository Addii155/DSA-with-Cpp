#include<bits/stdc++.h>
using namespace std;
# define ll long long

 int finder(int r,int c,int er,int ec){
        if(r>er || c>ec) return 0;
        if(r==er && c==ec) return 1;
        int downpath=finder(r+1,c,er,ec);
        int rightpath=finder(r,c+1,er,ec);
        return downpath+rightpath;
    }

 int maze(int r,int c){
        if(r==0 || c==0) return 0;
        if(r==1 && c==1) return 1;
        int downpath=maze(r-1,c);
        int rightpath=maze(r,c-1);
        return downpath+rightpath;
    }
 void uniquePath(int r,int c,string s){
     if(r<0 || c<0) return;
        if(r==1 && c==1) {
            cout<<s<<endl;
        }
        uniquePath(r-1,c,s+"D");
        uniquePath(r,c-1,s+"R");
        // return downpath+rightpath;
 }
int main()
{
    string s="";
    // cout<<finder(1,1,5,5)<<endl;
    uniquePath(3,3,s);
    // cout<<maze(5,5)<<endl;
    return 0;
}