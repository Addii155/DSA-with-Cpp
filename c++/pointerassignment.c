#include<stdio.h>
#include<conio.h>
void main()
{
    int a[]={1,2,3,4,5};
    int *p;
    p=&a[3];
    p=p++;
     // q=p;
    printf("%d",*--p);
    getch();
}