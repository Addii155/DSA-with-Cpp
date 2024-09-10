#include<stdio.h>
void main()
{
    int a=10,b=9;
    int *p,*q;
    p=&a;
    q=&b;
    printf("vaule of a=%d ",a);
    printf("value of a=%d",*p);
    printf("value of a=%d",&a);
    printf("value of a=%d",p);
    printf("value of b=%d",q);
    printf("value of b=%d",*q);
    printf("value of b=%d",b);
    printf("address of p:%x",&p);
    printf("address of b:%x",b);

}