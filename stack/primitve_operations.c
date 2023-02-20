#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 40
#define TRUE 1
#define FALSE 0
/***************/
struct stack
{
    int item[STACKSIZE];
    int TOP;
};
struct stack s;
char stacktop()
{
    int x;
    x=s.item[s.TOP];
    return x;
}
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
    struct stack s;
    Initialize();
    Push(100);
    Push(200);
    Push(300);
    Push(400);
    Push(500);
    Push(600);
    Push(700);
    Push(800);
    Push(900);
    x=Pop();
    printf("\n%d",x);
    x=Pop();
    printf("\n%d",x);
    x=Pop();
    printf("\n%d",x);
    x=Pop();
    printf("\n%d",x);
    return 0;

}