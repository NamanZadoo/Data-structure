#include<stdio.h>
void arrayinsert(int *a,int *n,int i,int *x)
{
    for(int j=*n-1;j>=i;j--)
    {
            *(a+j+1)=*(a+j);
    }
    *(a+i)=*x; 
}
void pqueueinsertion(int *a,int *n,int *x)
{
    int i=0;
    while (i<*n && (*x>=*(a+i)))
        i++;
    arrayinsert(a,n,i,x);
    *n=*n+1;
}
void pqueuedelete(int *a,int *n)
{
    for(int i=1;i<*n;i++)
    {
        *(a+i-1)=*(a+i);
    }
}
int pqueuedeletion(int *a,int *n)
{
    // int x=*(a+*n-1);
    // *n=*n-1;
    // return x;
    int x=*a;
    pqueuedelete(a,n);
    *n=*n-1;
    return x;
}
int main()
{
    int a[11];
    int b[11]={1,3,2,5,4,7,6,9,10,10,4};
    int n=0;
    for(int i=0;i<11;i++)
    {
        pqueueinsertion(a,&n,&b[i]);
    }
    for(int k=0;k<11;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
     for(int i=0;i<11;i++)
     {
         printf("%d ",pqueuedeletion(a,&n));
     }
    return 0;
}