#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("enter the number of elements:\t");
    scanf("%d",&n);
    printf("enter the elements:\t");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf(" %d ",a[i]);
    }
    
    return 0;
} 