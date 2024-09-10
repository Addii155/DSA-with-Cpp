#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],i;
    printf("enter string:");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>=65 && 97>=s1[i]);
        {
            s1[i]=s1[i]+31;
        }
    }
    printf("%s",s1);
}