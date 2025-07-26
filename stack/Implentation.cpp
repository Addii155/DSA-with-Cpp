#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;
public:
    Stack(int n)
    {
        cout<<"Constructor Called with Size: "<<n<<endl;
        size=n;
        arr = new int[size];
        top=0;
    }
    void Push(int data)
    {
        if(top==size)
        {
            cout<<"Stack size is Full"<<endl;
            return;
        }
        arr[top]=data;
        top++;
    }
    int Pop()
    {
        if(top==0)
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        top--;
        int val=arr[top];
        return val;
    }
    bool empty()
    {
        return top==0;
    }
};

int main()
{
    Stack st(5);
    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Push(4);
    st.Push(5);
    st.Push(7);
    cout<<st.Pop()<<endl;
    while(!st.empty())
    {
        cout<<st.Pop()<<endl;
    }

}