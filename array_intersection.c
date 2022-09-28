#include<stdio.h>
void intersectionarray(int a[],int m,int b[],int n)
{
    int i=0,j=0,k=0;
    int c[30];
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else
        {
            if(a[i]>b[j])
            {
                j++;
            }
            else
            {
                c[k]=a[i];
                i++;
                j++;
                k++;
            }
        }
    }
    printf("INTERSECTION OF ARRAY IS:\t");
    for(i=0;i<k;i++)
    {
        printf(" %d ",c[i]);
    }
}
int main()
{
    int a[20];
    int b[20];
    int m=10,n=12;
       int i=0,j=0,k=0;
    printf("ENTER SIZE OF 1st ARRAY:");
    scanf("%d",&m);
    printf("enter elements of 1st array:\t");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER SIZE OF 2nd ARRAY:");
    scanf("%d",&n);
    printf("enter elements of 2nd array:\t");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    intersectionarray(a,m,b,n);
    return 0;
}
