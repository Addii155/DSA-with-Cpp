#include<stdio.h>
int main()
{
    int i,a,y=0;
    printf("enter the value of a:");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        y++;
    }
    if(y==0)
        printf("%d is a prime number:",a);
    else
        printf("%d is composite number",a);

    return 0;
}