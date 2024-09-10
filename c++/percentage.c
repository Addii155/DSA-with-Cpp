#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    float sum=0,per=0;
    printf("enter five number");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per=(sum/500)*100;
    printf("%f",per);
    getch();


}
