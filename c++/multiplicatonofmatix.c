#include<stdio.h>
#define N 50
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("enter first matix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter second matix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nthe first matix is;\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }        
    printf("\nthe second matix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {  sum=0;
            for(k=0;k<3;k++)
            {

            sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;

            // scanf("%d",&a[i][j]);
        }
    }
    printf("multiplication is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}    