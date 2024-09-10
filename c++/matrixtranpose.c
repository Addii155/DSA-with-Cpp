#include<stdio.h>
int main()
{
    int a[2][2],i,j;
    printf("enter the element of matrix:");
    scanf("%d",&a[2][3]);
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n the matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\ntranspose of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}