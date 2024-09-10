   #include<stdio.h>
#include<string.h>
int main()
{
    int value;
    char s1[]="hellow";
    char s2[]="hey";
    value=strcmp(s1,s2);
    if(value==0)
    {
        printf("same");   
    }
    else
    {
        printf("%d",value);
        return 0;
    }
}