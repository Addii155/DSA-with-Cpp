#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int val)
    {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void RightView(Node* root)
{
    if(root==NULL) return ;
    queue<Node*>q;
    q.push(root);
    vector<int>ans;
    while(q.size()>0)
    {
        int nthlevel=q.size();
        for(int i=0;i<nthlevel;i++)
        {
            Node* front=q.front();
            q.pop();
            if(i==nthlevel-1) ans.push_back(front->data);
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
        
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }

}
int main()
{
    Node *root=new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    
    cout<<"Right View of Binary Tree << :\n";

    RightView(root);
    return 0;

}
