#include<stdio.h>
int main()
{
    int i,j,min;
    int a[10];
    int n=0,c=0;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-2;i++)
    min=i;
    {
        for(j=i+i;j<=n-1;j++)
        {
            if(a[j]<a[min])
            {
                c=a[i];
                a[i]=a[min];
                a[min]=a[i];
            }
        }
        
    }
    for(i=0;i<=n-1;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}