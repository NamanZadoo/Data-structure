#include<stdio.h>
int main()
{
    int i,j;
    int r,c;
   int  a[10][10];
   int b[10][10];
    printf("enter the rows and columns:\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements:\n");
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    b[j][i]=a[i][j];
    printf("tranpose is :\n");
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c;j++)
        {
            printf("%d",b[i][j]);
        }
    }
}