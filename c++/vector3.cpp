#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    vector<int>v(5,100);
    
    //  vector<int>::iterator it=v.begin();
     v.erase(v.begin(),v.begin()+4);
    
     v.insert(v.begin(),300);
   
     v.insert(v.begin()+1,2,5);
      for(auto it : v)
    cout<<it<<" ";
     cout<<v.size()<<endl;
    //  for(auto it:v){
    //     cout<<it<<" ";
    return 0;
}