// Online C compiler to run C program online
#include <stdio.h>
int main() {
    // Write C code here
    int n,ele,pos;
    printf("Enter number of element in sorted array");
    scanf("%d",&n);
    int arr[n];
    printf("enter element of matix");
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    printf("enter ele to be inserted");
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        if(ele<arr[i]){
        pos=i;
        break;
        }
    }
    n++;
   for(int i=n-1;i>=pos;i--)
   {
       arr[i]=arr[i-1];
   }
   arr[pos]=ele;
   for(int i=0;i<n;i++)
   {
       printf("%d",arr[i]);
   }

    return 0;
}
