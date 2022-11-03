#include<stdio.h>
int main()
{
   int r,c,temp=0;
   printf("enter no. of rows and column for matrix \n");
   scanf("%d%d",&r,&c);
   int m[r][c];
   printf("enter elements of matrix\n");
   for(int i=0;i<=r-1;i++)
   {
    for(int j=0;j<=c-1;j++)
    {
        scanf("%d",&m[i][j]);
    }
   }
    printf("The given matrix is:\n");
    for(int i=0;i<=r-1;i++)
   {
    for(int j=0;j<=c-1;j++)
    {
        printf("%d ",m[i][j]);
    }
    printf("\n");
   }
   for(int i=0;i<=c-1;i++)
   {
     for(int j=0;j<=r-1;j++)
     {
        if(i>=j)
       {
          temp=m[j][i];
          m[j][i]=m[i][j];
          m[i][j]=temp;
       }
       else continue;
     }
    }
   printf("Transpose of the matrix is:\n");
   for(int i=0;i<=c-1;i++)
   {
    for(int j=0;j<=r-1;j++)
    {
        printf("%d ",m[i][j]);
    }
    printf("\n");
   }
   return 0;
}

