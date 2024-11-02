#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>s;
    s.insert(5);
    s.insert(1);
     s.insert(7);
     s.insert(3);
     s.erase(3);
    for(auto it:s)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    map<string,int>m;
    
     m["aman"]=20;
      m["aditya"]=9;

    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
}