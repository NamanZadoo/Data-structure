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
    char x[100];
    struct stack s;
    Initialize();
    int i=0,flag=0;
    printf("Enter the expression :\t");
    scanf("%s",x);
    while(x[i]!='\0')
    {
        if(x[i]=='(')
            Push(x[i]);
        else
        {
            if(!IsEmpty())
                Pop();
            else{
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            if(IsEmpty())
                printf("CORRECT");
            else
                printf("INCORRECT");
        }
        else
            printf("INCORRECT");
        return 0;
    }
    return 0;

}