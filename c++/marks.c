#include<stdio.h>
void main()
{
    int i;
   float marks[5];
    float sum=0.0,per;
    printf("enter marks of five student");
    for(i=0;i<5;i++)
    {
        scanf("%f",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    per=sum*.2;
    printf("sum=%f",sum);
    printf("\n average=%f",per); 
}