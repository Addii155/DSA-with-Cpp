#include<stdio.h>
struct Node
{
  int data;
  struct Node *left ,*right;
};
 struct Node* newnode(int x)
 {
 struct Node * node;
 node= (struct Node*)malloc(sizeof(struct Node));
 node->data=x;
 node->left=NULL;
 node->right=NULL;
 return node;
 }
  void traverse( struct Node* head)
 {
    
   if(head==NULL) return; 
    {
        
        traverse(head->left);
        printf("%d\t",head->data);
        traverse(head->right);
    }
    
 }
 void insertion(struct Node* head)
 {
    if(head)
 }
 int main()
 {
    struct Node * a=newnode(10);
    struct Node * b=newnode(20);
    struct Node * c=newnode(6);
    struct Node * d=newnode(40);
    struct Node * e=newnode(2);
    struct Node * f=newnode(30);
    insertion(a);
    insertion(b);
    insertion(c);
    insertion(d);
    insertion(e);


 }