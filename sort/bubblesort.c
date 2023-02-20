#include<stdio.h>
void bubblesort(int a[],int n)
{
    int i=0,j=0,b;
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                b=a[j+1];
                a[j+1]=a[j];
                a[j]=b;
            }
        }
    }
    printf(" \n sorted array: %d ",a[i]);
    for(i=0;i<=n-1;i++)
    {
        printf(" %d ",a[i]);
    }
}
int main()
{
    int a[20];
    int n=0,i=0;
    printf("enter the number of elements:\t");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
}
