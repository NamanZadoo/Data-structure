#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p;
    int i;
    p=(char*)malloc(40);
    for(i=0;i<=9;i++)
        scanf("%c",(p+i));
    for(i=0;i<=9;i++)
        printf("%c\t",*(p+i));
    printf("%lu",sizeof(char));
    return 0;
}
