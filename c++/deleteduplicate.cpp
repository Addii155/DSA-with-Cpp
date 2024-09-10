#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={1,1,2,2,3,3,4,5,6};
    sort(arr,arr+9);
    int j=8;
    vector<int>v;
    for(int i=0;i<8;i++){
       if(arr[i]!=arr[i+1]){
        v.push_back(arr[i]);
       }}
      if(arr[j]!=v.back()){
    v.push_back(arr[j]);}  
 for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";}
   return 0;
}