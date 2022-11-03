#include<stdio.h>
int main()
{
    int i=0,j=0,k=0;
    int r1,c1,r2,c2;
    int A[10][10];
    int B[10][10];
    int c[10][10];
    printf(" ENTER THE ROWS AND COLUMN OF 1ST MATRIX: \n");
    scanf("%d%d",&r1,&c1);
    printf("enter elements of matrix 1: \n");
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("ENTER THE ROWS AND COLUMNS OF 2ND MATRIX: \n");
    scanf(" %d %d",&r2,&c2);
    printf("enter elements of matrix 2: \n");
    for(i=0;i<=r2-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            int sum=0;
            for(k=0;k<=c1-1;k++)
            {
                sum=A[i][k]*B[k][j]+sum;
            }
            c[i][j]=sum;
        }
    }
     printf("matrix is:\n");
    for(i=0;i<=r2-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}