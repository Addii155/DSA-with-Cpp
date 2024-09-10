#include<stdio.h>
int main()
{
    float i=1,n=3,fact=1,sum=0;
    //sum=i/fact;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+i/fact;
        printf("%f\n",sum);
    }
return 0;
}