#include <iostream>
#include<stack>
#include<vector>
using namespace std;


int main()
{
    int arr[]={2,1,10,5,6,4,2}; 
    //         1 -1  5  4  4  2  -1
    int n= sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    vector<int>nse(n,-1);
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        while( !st.empty() &&   st.top() >=arr[i] ) st.pop();
        if(!st.empty()) 
        {
            nse[i]=st.top();
        }
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
         cout << "Next greater element for " << arr[i] << " is " << nse[i]<<"\n";
    }

}