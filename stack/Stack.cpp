#include <bits/stdc++.h>
using namespace std;
void display(stack<int>st)
{
    while(st.size()!=0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    // cout<<"hello world";
}
int main()
{
    int arr[]={10,3,-1,-3,5,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>nge(n);
    stack<int>st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        while(st.size()>0 && st.top()<arr[i]) {
            st.pop();
        }
        nge[i]=st.top();
        st.push(arr[i]);
    }
    for(auto it: nge) cout<<it<<" ";
    // stack<int>st;
    // st.push(10);
    //  st.push(20);
    //  st.push(30);
    //  st.push(40); 
    //  st.push(50);
    //  display(st);
}