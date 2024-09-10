#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node* root)
{
    if(root==NULL) return ;
    cout<<root->val<<" ";   
    display(root->left);
    display(root->right);
}
int displaysum(Node* root)
{
    if(root==NULL) return 0;
    return root->val+ displaysum(root->left) + displaysum(root->right);
}
int nodepro(Node* root)
{
    if(root==NULL) return 1;
    // return root->val;
    return root->val * nodepro(root->left) * nodepro(root->right);
}
int size(Node*root)
{
    if(root==NULL) return 0;
    return 1 +size(root->left)+size(root->right);
 }
 int maxval(Node* root)
 {
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxval(root->left),maxval(root->right)));
 }
 int maxlevel(Node* root)
 {
    if(root==NULL) return 0;
    return max(maxlevel(root->left),maxlevel(root->right)) +1;
 }
int main()
{
   Node* a= new Node(100);
   Node* b= new Node(20);
   Node* c= new Node(30);
   Node* d= new Node(40);
   Node* e= new Node(50);
   a->left=b;
   a->right=c;
   b->left=d;
   d->right=e;
//    int sum=displaysum(a);
//    cout<<sum<<endl;
    // int product=nodepro(a);
    // cout<<product<<endl;
    // cout<<size(a)<<endl;
    // cout<<maxval(a)<<endl;
    cout<<maxlevel(a)<<endl;
   display(a);
}