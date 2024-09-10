#include<stdio.h>
void printstr(char str[])
{
    int i;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
    char str[]={'a','d','i','t','y','a','\0'};
    printstr(str);
    return 0;
}
