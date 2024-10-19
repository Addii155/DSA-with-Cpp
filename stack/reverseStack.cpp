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
void reversest(stack<int>&st)
{
    if(st.empty())
    {
        return;
    }
    int topelement=st.top();
    st.pop();
    reversest(st);
    pushAtBottom(st,topelement);
}
int main() {
  stack<int>st;
  st.push(12);
  st.push(14);
  st.push(15);
  st.push(16);
//    while(!st.empty())
//   {
//     cout<<st.top()<<'\n';
//     st.pop();
//   }
  reversest(st);
  while(!st.empty())
  {
    cout<<st.top()<<'\n';
    st.pop();
  }
  return 0;
}