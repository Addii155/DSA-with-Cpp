#include<bits/stdc++.h>
using namespace std;
void printdivisior(int n){
    vector<int>is;
    for(int i=0;i<sqrt(n);i++){
        if(n%i==0){
        is.push_back(i);
        if(n/i!=i){
            is.push_back(n/i);
        }}
    }
    sort(is.begin(),is.end());
     for(auto it:is){
        cout<<it<<" ";
     }
}
int main()
{
int n;
cin>>n;
printdivisior(n);
return 0;
}