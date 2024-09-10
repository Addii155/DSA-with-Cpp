#include<stdio.h>
int main()
{
int a=10,b=9;
    int*p,*q;
    p=&a;q=&b;
    p=q;
    printf("%d%d%d",a,*p,*q);
    return 0;
}