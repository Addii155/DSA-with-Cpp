#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age=25)
    {
        printf("your age is %d",age);
        printf("\nyou can go coffee with me");
    }
    printf("its time to go home");
    getch();
}