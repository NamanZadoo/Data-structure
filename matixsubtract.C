#include<stdio.h>
int main()
{
    int i=0,j=0;
    int r,c;
    int a[10][10];
    int b[10][10];
    int d[10][10];
    printf("enter rows and columns of matrix 1:\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements of matrix 1:\n");
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of matrix 2:\n");
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("addition of matrix is:\n");
       for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
             printf("%d  ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    