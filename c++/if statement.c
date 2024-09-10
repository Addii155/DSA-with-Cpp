#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age>20 && age<30)
    {
    printf("you can go coffee with me");
    }
    else
    {
    printf("your age is %d",age);
    printf("its time to go home");
    }
    getch;
}    