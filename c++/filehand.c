#include<stdio.h>
int main()
{
    FILE *ptr =NULL;
    char string[34];
    ptr=fopen("myfile.text","r");
    fscanf(ptr,"%s",string);
    printf("%s\n",string);
    return 0;
    

}