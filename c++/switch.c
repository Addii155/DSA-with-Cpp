#include<stdio.h>
void main()
{
    int a;
    printf("enter a:");
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("aditya");
        break;
        case 2:
        printf("gupta");
        break;
        default :
        printf("bye");
    }
    printf("\ngo to home");
    return 0;
}