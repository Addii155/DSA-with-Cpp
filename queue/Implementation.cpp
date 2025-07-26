#include<bits/stdc++.h>
using namespace std;

class Queue{

    int *arr;
    int size;
    int rearidx;
    int frontidx;

public:
    Queue(int size)
    {
        this->size=size;
        cout<<"Constructor is called: "<<size<<endl;
        arr= new int[size];
        rearidx=0;
        frontidx=0;
    }
    int front()
    {
        if(frontidx==rearidx)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[frontidx];
    }
    int pop()
    {
        if(rearidx==frontidx)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[rearidx];
    }
    void push(int data)
    {
        if(rearidx==size)
        {
            cout<<"Queue is Full"<<endl;
        }
        arr[rearidx++]=data;
    }

};

int main()
{
    Queue qe(3);
    qe.push(2);
    qe.push(3);
    qe.push(4);
    cout<<qe.front()<<endl;
    qe.push(5);
    
}