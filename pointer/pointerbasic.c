#include<stdio.h>
void traverse(int *ptr,int n)
{
    int i;
    for(i=0;i<=n-1;i++)
        printf("%d",*(ptr+i));
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr,i;
    ptr=&a[0];
    for(i=0;i<=9;i++)
        printf("%d",a[i]);
    printf("\n");
    for(i=0;i<=9;i++)
        printf("%d",*(ptr+i));
    printf("\n");
    for(i=0;i<=9;i++)
        printf("%d",*(a+i));
    printf("\n");
    traverse(a,10);
    return 0;
}
