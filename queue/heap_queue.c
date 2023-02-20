#include<stdio.h>
void PQueueinsert(int *a,int *n,int d)
{
    int x,y;
    *(a+*n)=d;
    x=*n;
    y=(*n-1)/2;
    while(x >0 && *(a+x)<*(a+y))
    {
        int t=*(a+x);
        *(a+x)=*(a+y);
        *(a+y)=t;
        t=x;
        x=y;
        y=(x-1)/2;
    }
    *n=*n+1;
}
void MinHeap(int *a,int i,int *n)
{
    int l,r,min,t;
    i=0;
    while ((2*i+1)<=(*n-1))
    {
        l=2*i+1;
        r=2*i+2;
        min=l;
        if (r<=*n-1)
        {
            if (*(a+r)<*(a+l))
                min=r;
            if (*(a+min)<*(a+i))
            {
                t=*(a+min);
                *(a+min)=*(a+i);
                *(a+i)=t;
            }
            else
                break;
            i=min;
        }
        else
        {
            if (*(a+min)<*(a+i))
            {
                int t=*(a+min);
                *(a+min)=*(a+i);
                *(a+i)=*(a+min);
            }
            else
                break;
            //i=min;
        }
        i=min;
    }
}
int PQueueDelete(int *a,int *n)
{
    int x;
    x=*(a+0);
    *(a+0)=*(a+*n-1);
    *n=*n-1;
    int w=0;
    MinHeap(a,w,n);
     
    return x; 
}
void display(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
}
void main()
{
    int a[20];
    int n=0;
    PQueueinsert(a,&n,5);
    PQueueinsert(a,&n,10);
    PQueueinsert(a,&n,20);
    PQueueinsert(a,&n,30);
    PQueueinsert(a,&n,25);
    PQueueinsert(a,&n,40);
    PQueueinsert(a,&n,50);
    PQueueinsert(a,&n,40);
    PQueueinsert(a,&n,10);
    display(a,n);
    printf("\n checking");
    printf("\n%d",PQueueDelete(a,&n));
    printf("\n");
    display(a,n);
    printf("\n%d",PQueueDelete(a,&n));
    printf("\n");
    display(a,n);
    printf("\n");
     printf(" %d\t",PQueueDelete(a,&n));
     printf(" %d\t",PQueueDelete(a,&n));
     printf(" %d\t",PQueueDelete(a,&n));
     printf(" %d\t",PQueueDelete(a,&n));


}