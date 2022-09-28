#include<stdio.h>
int main()
{
    int a[5],i,min=0;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        if (min>a[i])
        min=a[i];
    }
    printf("%d",min);
    return 0;
}