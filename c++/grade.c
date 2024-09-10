#include<stdio.h>
#include<conio.h>
void main()
{
    int marks,grade;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks>90)
    printf("grade is A+");
    if(marks>80)
    printf("grade is A");
    if(marks>70&&marks<80)
    printf("grade is B+");
    if(grade>60)
    printf("grade is B");
    else
    printf("grade is D");
    printf("\nend of program");
    getch();
}