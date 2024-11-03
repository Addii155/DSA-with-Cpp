#include<iostream>
#include<stack>
#include<climits>
using namespace std;
int mini=INT_MAX;
stack<int>minstack;
// push operation
void push(int x)
{
    if(minstack.empty())
    {
        minstack.push(x);
        mini=x;
    }
    else if(x<mini)
    {
        minstack.push(2*x - mini);
        mini=x;
    }
    else
    {
        minstack.push(x);
    }
}

int pop()
{
    if(minstack.empty())
    {
        return -1;
    }
    else if(minstack.top()<mini)
    {
        int temp=mini;
        mini=2*mini-minstack.top();
        minstack.pop();
        return temp;
    }
    else
    {
        int temp=minstack.top();
        minstack.pop();
        return temp;
    }
}

int getMin()
{
    if(minstack.empty())
    {
        return -1;
    }
    else if(minstack.top()<mini)
    {
        return mini;
    }   
    else
    {
        return minstack.top();
    }
}
int top()
{
    if(minstack.empty())
    {
        return -1;
    }
    else if(minstack.top()<mini)
    {
        return mini;
    }   
    else
    {
        return minstack.top();
    }
}
int main()
{
    stack<int>st;
    int arr[]={12,15,10,11,5,6,2,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        push(arr[i]);
    }
    // cout<<mini<<" ";
    // cout<<getMin()<<" ";
    // pop();
    // cout<<getMin()<<" ";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<pop()<<" ";
    // }
    cout<<endl;
    return 0;
}