#include<stdio.h>
int main()
{
    int a[50];
    int i,j,x,n;
    printf("enter number of element");
    scanf("%d",&n);
    printf("enter element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("element is found at index %d\n",i);
        }
    }
}