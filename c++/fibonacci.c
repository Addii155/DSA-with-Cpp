#include<stdio.h>
int fib(int i)
{
    
    if(i==0)
    {
        return 0;

    }
    if(i==0)
    {
        return 1;
    }
    else 
    return fib(i-1)+fib(i-2);
}
int main()
{
    int n;
    printf("enter the index to get fibonacci series\n");
    scanf("%d",&n);
    printf("%d using iterative",fib(n));
    return 0;
}