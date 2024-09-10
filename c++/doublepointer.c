#include<stdio.h>
void main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("a=%d",***r);
}