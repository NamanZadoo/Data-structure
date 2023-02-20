#include<stdio.h>
void ToH(int n, char s, char m, char d)
{
    if(n==1)
        printf("\n%c-->%c",s,d);
    else
    {
        ToH(n-1,s,d,m);
        printf("\n%c-->%c",s,d);
        ToH(n-1,m,s,d);   
    } 
}
int main()
{
    int n;
    printf("enter number of rings:\t");
    scanf("%d",&n);
    ToH(n,'s','m','d');
}
