#include<stdio.h>
void unionarray(int a[],int m,int b[],int n)
{
    int c[30];
    int k=0,i=0,j=0;
    while (i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            if(b[j]<a[i])
            {
                c[k]=b[j];
                j++;
                k++;
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
    
    while(i<m)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    printf("UNION OF ARRAY IS:\t");
    for(i=0;i<k;i++)
    {
        printf("  %d",c[i]);
    }
     printf("\n");
}
/******************/
 int main()
{
    int a[20];
    int b[20];
    int m=10,n=12;
       int i=0,j=0,k=0;
    printf("ENTER NO. OF ELEMENTS IN 1st ARRAY:");
    scanf("%d",&m);
    printf("\n enter elements of 1st array:\t");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER NO. OF ELEMENTS IN 2nd ARRAY:");
    scanf("%d",&n);
    printf("\n enter elements of 2nd array:\t");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    unionarray(a,m,b,n);
    return 0;
} 
