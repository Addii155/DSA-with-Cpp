#include<stdio.h>
int main()
{
    int n,cout=0,x,y,r,sum=0;
    printf("enter the value of n=");
    scanf("%d",&n);
    x=n;
    y=n;
    printf("number of digit");
    while(x>0)
    {
        x=x/10;
        cout=cout+1;
    }
    printf("%d",cout); 
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r*r*r;
        n=n/10;
    }
    if(sum==n)
    printf("is armstrong number");
    else
    {
        printf("not armstrong");
    }

}
