#include<stdio.h>
#include<stdlib.h>
void input(int *p ,int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",(p+i));
}
void output(int *p ,int n)
{
    for(int i=0;i<n;i++)
        printf("%d",*(p+i));
}
int main()
{
    int *p,i,n;
    printf("how many elements:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the elements:");
    input(p,n);
    output(p,n);
    return 0;
}