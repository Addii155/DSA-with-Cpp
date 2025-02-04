#include<iostream>
using namespace std;

class Minheap{
    public:
    int idx=1;
    int arr[50];
    int top()
    {
        return arr[1];
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=1)
        {
            int parent=arr[i/2];
            if(parent>x){
                swap(arr[i/2],arr[i]);     
            }
            else break;
            i=i/2;
        }
    }
    void display(){
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    // void pop(){
    //     arr[1]=arr[idx-1];

    // }
};

int main(){
    Minheap m1;
    m1.push(30);
    m1.push(10);
    m1.push(20);
    m1.push(3);
    m1.display();
    m1.push(50);
    m1.push(5);
    m1.display();
}