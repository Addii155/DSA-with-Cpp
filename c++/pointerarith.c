#include<stdio.h>
int main()
{
    int a[5]={0,1,2,3,4};
    int *p=&a[0];
    printf("%d\t",*p);
    p=p+3;
    printf("%d\t",*p);
    return 0;
}