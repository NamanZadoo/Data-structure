#include<stdio.h>
int power(int a, int n)
{
    if(n==0)
        return 1;
    return power(a,n-1)*a;
}
int main()
{
    int b=0;
    int a,n;
    scanf("%d\t%d",&a,&n);
    b=power(a,n);
    printf(" %d ",b);
    return 0;
}
