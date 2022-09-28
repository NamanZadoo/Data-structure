#include<stdio.h>
int main()
{
    int i=0,j=0,n=0,b;
    int a[20];
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("enter the elements:\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element : ");
    scanf("%d",&b);
     j=n;
    for(i=0;i<n;i++)
    {
        if(b<a[i]){
        j=i;
        break;
        }
    }
    for(i=n;i>=j;i--)
    {
        a[i]=a[i-1];
    }
    a[j]=b;
    for(i=0;i<=n;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}