#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 40
#define TRUE 1
#define FALSE 0
/***************/
int item[STACKSIZE];
int TOP;
int m=3;

/****************/
void Initialize(int i)
{
    TOP(i)=((STACKSIZE/m)*i)-1;
}
/***************/
int IsEmpty(int i)
{
    if(TOP(i)==((STACKSIZE/m)*i)-1)
        return TRUE;
    else
        return FALSE;
}
/**************/
void Push(int item[],int TOP(i),int i,int x)
{
    
    if(TOP(i)==((STACKSIZE/m)*(i+1))-1)
    {
        printf("\nstack overflows");
        exit(1);
    }
    TOP(i)++;
    item[TOP(i)]=x;
}
/**************/
int Pop(int item[],int TOP(i),int i)
{
    int x;
    if(IsEmpty())
    {
        printf("\n stack overflows:");
        exit(1);
    }
    x=item[TOP(i)];
    TOP(i)--;
    return x;
}