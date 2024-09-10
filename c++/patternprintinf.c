#include<stdio.h>
void starpattern(int n )
{
    
    for(int i=1;i<=n;i++)
    {
    
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
        for(int i=n-1;i>0;i--)
    {
    
        for(int j=n-4;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
int main()
{
    int n=5,rows;
  //  printf("no of rows\n");
   // scanf("%d",&n);
    starpattern(n);
    return 0;
}