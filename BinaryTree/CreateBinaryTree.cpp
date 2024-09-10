#include <bits/stdc++.h>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *Left;
    Node *Right;
    Node(int val)
    {
        data = val;
        Left = NULL;
        Right = NULL;
    }
};

Node *createBinaryTree(int arr[], int i, int n)
{

    Node *root = new Node(arr[0]);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (2 * i + 1 < n)
        {
            temp->Left = new Node(arr[2 * i + 1]);
            q.push(temp->Left);
        }
        if (2 * i + 2 < n)
        {
            temp->Right = new Node(arr[2 * i + 2]);
            q.push(temp->Right);
        }
        i++;
    }
    return root;
}

void printBinaryTree(Node *root)
{
    queue<Node *> q;
    q.push(root);
    // cout << root->data << " ";
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->Left)
            {
                q.push(temp->Left);
            }
            if (temp->Right)
            {
                q.push(temp->Right);
            }

            
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = createBinaryTree(arr, 0, n);
    printBinaryTree(root);
}