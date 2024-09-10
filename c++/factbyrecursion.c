#include<stdio.h>
int fact(int n)
{
    
    if(n==0)
    return 0;
    return n*fact(n-1);
    
}
int main(){
int num;
printf("enter the number\n");
scanf("%d",&num);
printf("the fact of %d is %d\n",num,fact(num));
return 0;
}