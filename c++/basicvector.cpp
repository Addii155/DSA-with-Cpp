#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v(6);

for(int i=0;i<5;i++){
    cin>>v[i];
    }
for ( int j = 0; j < v.size(); j++)
{
    cout<<v[j]<<endl;
}


return 0;
}
