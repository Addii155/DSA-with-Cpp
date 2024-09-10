#include <bits/stdc++.h>
using namespace std;
class Node{
public: 
        int val;
        Node* left;
        Node* right;
        Node(int n){
            this->val=n;
            this->left=NULL;
            this->right=NULL;
        }
};
void display(Node* root)
{
    if(root==NULL)
    return;
    display(root->left);
    display(root->right);
        cout<<root->val<<" ";

}
int sum(Node* root)
{
    if(root==NULL) return 0;
    return root->val +sum(root->left) + sum(root->right);
}
int main()
{
    Node* a =new Node(1);
    Node* b =new Node(2);
    Node* c =new Node(3);
    Node* d =new Node(4);
     Node* e =new Node(5);
     a->left=b;
     b->left=c;
     a->right=d;
     d->left=e;
  //       a
  //      /  \
  //     b    d
  //    /     / 
//     c      d
    //   display(a);
      cout<<sum(a);

}