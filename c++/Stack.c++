#include<bits/stdc++.h>
#include<stack>
using namespace std;
void traversestack(stack<int>&st)
{
    if(st.empty())
    return ;
    int ans=st.top();
    st.pop();
     
    traversestack(st);
    cout<<ans<<endl;
}
int main()
{
  stack<int>st;
  st.push(1);
  st.push(13);
  st.push(5);
  st.push(12);
//   cout<<st.size()<<endl;
  traversestack(st);
  return 0;  
    
}