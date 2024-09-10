#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void traverse(struct Node * a)
{
    struct Node * temp=a;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    // printf("\n");
}
struct Node* addFront(struct Node * head,int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=head;
    return newNode;
}
struct Node * addEnd(struct Node* head,int daa)
{
     struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=daa;
    newNode->next=NULL;
    struct Node*temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}
struct Node* deleteNode(struct Node * head,int in)
{
    struct Node * temp=head;
    struct Node * prev=NULL;
    while(temp!=NULL && temp->data!=in)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    return head;

}
void lasnode(struct Node * head)
{
     struct Node * temp=head;
      printf("\n%d",head->data);
       struct Node* prev=NULL;
    while(temp!=head)
    {
      while(temp->next!=prev)
     {
        temp=temp->next;
     }
      prev=temp;
        printf("\n%d",temp->data);
    }
  
}
// struct Node * insert(struct Node* head,int data)
//  {
//     struct Node* temp;
//     struct Node * newNode=(struct Node*)malloc(sizeof(struct Node));
//     newNode->data=data;
//     newNode->next=NULL
    
//  }
struct Node* reverse(struct Node* head)
{
    struct Node* prev=NULL;
    struct Node* nextnode=head;
    struct Node* curr=head;
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    return prev;

}
int numb(struct Node* head)
   {
    int n=0;
    struct Node*temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        n++;
    }
    return n;
   }
void middle(struct Node * a)
{
    struct Node* slow=a;
    struct Node* fast=a;
    while(fast!=NULL && fast->next!=NULL )
    {
        slow=slow->next;
        fast=fast->next->next;
        // fast=fast->next;
    }
    printf("middle ele is %d",slow->data);
}
void traverecursion(struct Node* head)
{
    if(head==NULL) return;
     traverecursion(head->next);
    printf("%d\t",head->data);

   
}
int main()
{
    struct Node *a =(struct Node*)malloc(sizeof(struct Node));
    struct Node *b=(struct Node*)malloc(sizeof(struct Node));
    struct Node *c=(struct Node*)malloc(sizeof(struct Node));
    struct Node *d=(struct Node*)malloc(sizeof(struct Node));
    struct Node *e=(struct Node*)malloc(sizeof(struct Node));
    struct Node *f=(struct Node*)malloc(sizeof(struct Node));
    a->data=10;
    b->data=20;
    c->data=30;
    d->data=40;
    e->data=50;
    f->data=60;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=NULL;
    // traverse(a);
    traverecursion(a);
//     a=addFront(a,5);
//     a=addEnd(a,60);
// //    a= deleteNode(a,20);
// //    a=insert(a,25);
//     traverse(a);
    // lasnode(a);
//    a=reverse(a);
//    printf("Number of node are %d ",numb(a));
//    middle(a);
//    printf("after reversing node\n");
//    traverse(a);


}