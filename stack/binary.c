#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
/***************/
struct stack
{
    int item[STACKSIZE];
    int TOP;
};
struct stack s;
/****************/
void Initialize()
{
    s.TOP=-1;
}
/***************/
int IsEmpty()
{
    if(s.TOP==-1)
        return TRUE;
    else
        return FALSE;
}
/**************/
void Push(int x)
{
    if(s.TOP==STACKSIZE-1)
    {
        printf("\nstack overflows");
        exit(1);
    }
    s.TOP++;
    s.item[s.TOP]=x;
}
/**************/
int Pop()
{
    int x;
    if(IsEmpty())
    {
        printf("\n stack overflows:");
        exit(1);
    }
    x=s.item[s.TOP];
    s.TOP--;
    return x;
}
/************/
int main()
{
    int x;
    int rem;
    printf("Enter the number :\t");
    scanf("%d",&x);
    Initialize();
    while(x!=0)
    {
        rem=x%2;
        Push(rem);
        x=x/2;
    }
    while(!IsEmpty())
    {
        int a=Pop();
        printf(" %d",a);
    }
    return 0;
}
    
