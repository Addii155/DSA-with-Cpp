#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node* createLinkList()
{
    Node* head = NULL;
    cout<<"Enter the number of elements you want to enter in the list"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        Node* newNode = new Node(data);
        if(head==NULL)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

int main()
{
    createLinkList();
}