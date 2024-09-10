#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    a[i][j]=0; 
    printf("enter the element of array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[3][3]);
        }
    }
    printf("matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\nsum=%d",sum);
}
