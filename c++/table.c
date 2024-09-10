#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,num;
    printf("enter the num");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        a=num*i;
        printf("num*i=%d\n",num,i,a);
    }
    getch();



}