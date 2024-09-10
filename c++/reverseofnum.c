#include<stdio.h>
void main()
{
    int num,reversed=0,r;
    printf("enter the value of num:");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        reversed=reversed*10+r;
        num=num/10;
    }
    printf("%d",reversed);
    return 0;
}    
    