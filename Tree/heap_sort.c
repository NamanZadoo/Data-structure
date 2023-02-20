#include<stdio.h>
#include<stdlib.h>

void maxheapify(int a[],int i,int n)
{
    int l,r,m,t,j;
    while(2*i<n)
    {
        l=2*i+1;
        r=2*i+2;
        m=l;
        if(r<=n)
            if(a[r]>a[l])
                m=r;
        if(a[m]>a[i])
        {
            t=a[m];
            a[m]=a[i];
            a[i]=t;
        }
        else 
            break;
        i=m;
    }
}

void buildmaxheap(int a[],int n)
{
    int j;
    for(int i=n/2;i>=0;i--)
        maxheapify(a,0,j-1);
}

void heapsort(int a[],int n)
{
    int i,j;
    buildmazheap(a,i,n);
    for(j=n;j>=2;j--)
    {
        int t=a[j];
        a[j]=a[1];
        a[1]=t;
        maxheapify(a,0,j-1);
    }
}

int main()
{
    int a[10]={6,1,2,8,0,5,10,19,3,4};
    heapsort(a,9);
    for(int i=1;i<=10;i++)
        printf("%d",a[i]);
    return 0;
}

