#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 20
#define TRUE 1
#define FALSE 0
/***************/
struct stack
{
    char item[STACKSIZE];
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
void Push(char x)
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
char Pop()
{
    char x;
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
   
    return 0;
    

}