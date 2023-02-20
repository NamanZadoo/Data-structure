#include<stdio.h>
int main()
{
    int i,n,j,x;
    int a[10];
    printf("enter the no. of  elements: \t");
    scanf("%d",&n);
    printf("enter the elements:\t");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        x=a[i];
        j=i-1;
        while(a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }  
        a[j+1]=x;     
    } 
    
    for(i=0;i<=n-1;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
