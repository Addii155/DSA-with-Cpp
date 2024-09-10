#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;
int main()
{
map<string,int >mpp;
mpp["aditya"]=99;
mpp["rg"]=96;
mpp["gd"]=65;
mpp.insert({{"aditya",99},{"bs",3}});
map<string, int> :: iterator iter;
for(iter=mpp.begin();iter!=mpp.end();iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<endl;
}
return 0;
}