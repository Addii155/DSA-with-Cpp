#include<stdio.h>
void main()
{
    int a[]={2,3,67,0,56};
    int *p=a;
    p=a;
    printf("%d\n",*p++);
    printf("%d",*p);
}