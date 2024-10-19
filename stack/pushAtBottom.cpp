#include <iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>& st,int tar)
{
  if(st.size()==0)
  {
    st.push(tar);
    return;
  }
  int tp=st.top();
  st.pop();
  pushAtBottom(st,tar);
  st.push(tp);
}
int main() {
  stack<int>st;
  st.push(12);
  st.push(14);
  st.push(15);
  st.push(16);
  pushAtBottom(st,11);
  while(!st.empty())
  {
    cout<<st.top()<<'\n';
    st.pop();
  }
  return 0;
}