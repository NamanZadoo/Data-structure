#include<stdio.h>
#include<stdlib.h>
#define b 20

void display(int *a,int *n)
{
    for(int i=0;i<*n;i++)
    {
        printf(" %d ",a[i]);
    }
}

void arrayinsertion(int *a,int *n,int i,int x)
{
    for(int j=*(n-1);j>=i;j--){
        a[j+1]=a[j];
    }
    a[i]=x;
    n=n+1;
}

void PQinsterion(int *a,int *n, int x)
{
    int i=0;
    while( i<*n && x>=a[i])
        i++;
    arrayinsertion(a,n,i,x);
    
}

void arraydelete(int *a,int i, int *n)
{
    for(int j=i+1;j<=*(n-1);i++)
        a[j-1]=a[j];
    n=n-1;
}

int PQdeletion(int *a, int *n)
{
    int x=0;
    arraydelete(a,0,n);
    return x;
}

int main()
{
    int a[100],i=0,n;
    int x=0;
    scanf("%d",&n);
    PQinsterion(a,&n,100);
    PQinsterion(a,&n,600);
    PQinsterion(a,&n,100);
    PQinsterion(a,&n,10);
    PQinsterion(a,&n,900);
    PQinsterion(a,&n,400);
    PQinsterion(a,&n,300);
    PQinsterion(a,&n,600);
    PQinsterion(a,&n,200);
    PQinsterion(a,&n,400);
    PQinsterion(a,&n,500);
    PQinsterion(a,&n,9000);
    PQinsterion(a,&n,40);
    display(a,&n);
    x=PQdeletion(a,&n);
    printf("%d ",x);
    x=PQdeletion(a,&n);
    printf("%d ",x);
    x=PQdeletion(a,&n);
    printf("%d ",x);
    x=PQdeletion(a,&n);
    printf("%d ",x);
    x=PQdeletion(a,&n);
    printf("%d ",x);
    x=PQdeletion(a,&n);
    printf("%d ",x);
    x=PQdeletion(a,&n);
    printf("%d ",x);
    x=PQdeletion(a,&n);
    printf("%d ",x);
    x=PQdeletion(a,&n);
    printf("%d",x);
    
    return 0;
}

