#include<stdio.h>
int main()
{
   int a[10];
   int i=0;
   int j=0;
   int n,c;
   printf("ENTER THE SIZE OF ARRAY:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0,j=n-1;i<=j;i++,j--)
   {
         c=a[i];
         a[i]=a[j];
         a[j]=c;
   }   
   printf("reverse of array is:\t");
   for(i=0;i<n;i++)
   {
      printf(" %d ",a[i]);
   }
   return 0;
   
}