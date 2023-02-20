#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define STACKSIZE 40
#define TRUE 1
#define FALSE 0
/***************/
int item[STACKSIZE];
int TOP1;
int TOP2;
/****************/
void Initialize()
{
    TOP1=-1;
    TOP2=STACKSIZE;
}
/***************/
int IsEmpty1()
{
    if(TOP1==-1)
        return TRUE;
    else
        return FALSE;
}
int IsEmpty2()
{
    if(TOP2==STACKSIZE)
        return TRUE;
    else
        return FALSE;
}
/**************/
void Push1(int x)
{
    if(TOP1==TOP2-1)
    {
        printf("\nstack overflows");
        exit(1);
    }
    TOP1++;
    item[TOP1]=x;
}
void Push2(int x)
{
    if(TOP2==TOP1+1)
    {
        printf("\nstack overflows");
        exit(1);
    }
    TOP2--;
    item[TOP2]=x;
}
/**************/
int Pop1()
{
    int x;
    if(IsEmpty1())
    {
        printf("\n stack underflows:");
        exit(1);
    }
    x=item[TOP1];
    TOP1--;
    return x;
}
int Pop2()
{
    int x;
    if(IsEmpty2())
    {
        printf("\n stack underflows:");
        exit(1);
    }
    x=item[TOP2];
    TOP2++;
    return x;
}
int main()
{
    int x;
    Initialize();
    Push1(100);
    Push2(200);
    Push1(300);
    Push1(400);
    Push2(500);
    x=Pop1();
    printf("\n%d",x);
    x=Pop2();
    printf("\n%d",x);
    x=Pop2();
    printf("\n%d",x);
    x=Pop1();
    printf("\n%d",x);
    Pop1();
    Pop1();
    Pop1();
    Pop1();
    return 0;
}