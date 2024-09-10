#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int a,b,sum=0;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    return(sum);

}