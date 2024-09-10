#include<stdlib.h>
#include<stdio.h>
 struct Node
 {
    int data;
    struct Node *left ;
    struct Node *right; 
 };
 struct Node* newnode(int x)
 {
 struct Node * node=(struct Node*)malloc(sizeof(struct Node));
 
 node->data=x;
 node->left=NULL;
 node->right=NULL;
 return node;
 }
 void traverse( struct Node* head)
 {
    
   if(head==NULL) return; 
    {
        printf("%d\t",head->data);
        traverse(head->left);
        traverse(head->right);
    }
    
 }
 int main()
 {
    struct Node * a;
    a=newnode(10);
    struct Node* b= newnode(20);
    struct Node* c= newnode(30);
    struct Node*d= newnode(40);
    struct Node* e= newnode(50);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    traverse(a);
    }
 