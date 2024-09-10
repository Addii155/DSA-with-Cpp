#include<stdio.h>
int main()
{
    int a[50];
    int i,low,high,mid,n,x;
    printf("enter number of element");
    scanf("%d",&n);
    printf("enter element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search");
    scanf("%d",&x);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(a[mid]<x)
        {
           low=mid+1;
        }
        else if(a[mid]==x){
            printf("%d is at location is %d",x,mid+1);
            break;
        }
        else
        {
            high=mid-1;
            mid=(low+high)/2;
        }
            
    
    if (low>high){
    printf("not found ! %d is not present in the list",x);}
    return 0;}

}