#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i;
    p=(int*)malloc(40);
    for(i=0;i<=9;i++)
        scanf("%d",(p+i));
    for(i=0;i<=9;i++)
        printf("%d",*(p+i));
    printf("\n");
    printf("%lu",sizeof(int));
    return 0;

}