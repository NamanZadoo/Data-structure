#include<stdio.h>
int fib(int n)
{
    int DAT[n];
    if(n==1)
        DAT[1]=0;
    else
    {
        if(n==2)
            DAT[2]=1;
        else
        {
            DAT[n]=fib(n-1)+fib(n-2);
        }
    }
        return DAT[n];
}

int main()
{
    int i,f;
    for(i=1;i<=100;i++)
    {
        f=fib(i);
        printf(" %d",f);
    }
    return 0;
}
