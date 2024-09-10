#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
void vec(vector<int>&v){
   // v.pop_back();
    //display(v);
vector<int > :: iterator iter=v.begin();
for(iter=v.begin();iter!=v.end();iter++){
cout<<"output is :"<<(*iter)<<" ";
}
    return ;
}
void display(vector<int>&v3){
    for (int i = 0; i < v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{

return 0;
}