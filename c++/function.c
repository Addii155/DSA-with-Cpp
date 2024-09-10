#include<stdio.h>
int sum(void);
int sum()
{
    int a,b,sum=0;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);

} 
void main()
{
sum();
}