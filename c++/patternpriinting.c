#include<stdio.h>
void swap(int*,int*);
void swap(int*a,int*b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("after swap x=%d,y=%d",a,b);

}

 int main()
{
    int x=10,y=20;
     swap(&x,&y);
    
    printf("before swap x=%d,y=%d",x,y);

    return 0;
    

}