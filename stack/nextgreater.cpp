#include <iostream>
#include<stack>
#include<vector>
using namespace std;


int main()
{
    int arr[]={2,1,6,7,8,5,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    vector<int>nge(n,-1);
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        while( !st.empty() &&  arr[i] >= st.top() ) st.pop();
        if(!st.empty()) 
        {
            nge[i]=st.top();
        }
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
         cout << "Next greater element for " << arr[i] << " is " << nge[i]<<"\n";
    }

}