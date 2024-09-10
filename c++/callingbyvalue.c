#include<stdio.h>
int sum(int ,int);
int main()
{
    int x=5,y=7;
    sum(x,y);
    printf("sum=%d\n",sum);

}
int sum(int a,int b)
{
    int sum=0;
    sum=a+b;
     return sum;
    
}