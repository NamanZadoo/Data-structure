#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
int evaluate(int a, int b,char symb)
{
    switch (symb)
    {
    case'+':
        return a+b;
    case'-':
        return a-b;
    case'*':
        return a*b;
    case'/':
        return a/b;
    case'%':
        return a%b;
    case'^':
        return pow(a,b);
    default:
        break;
    }
}
/************/
void strrev(char x[])
{
    int t;
    int i=0;
    while (x[i]!='\0')
        i++;
    i=i-1;
    int j=0;
    while(j<i)
    {
        t=x[i];
        x[i]=x[j];
        x[j]=t;
        i--;
        j++;
    }
}
/************/
int main()
{
    char x[20];
    int y,i=0,a,b,value;
    char symb;
    printf("Enter the expression :\t");
    scanf("%s",x);
    Initialize();
    strrev(x);
    while(x[i]!='\0')
    {
        symb=x[i];
        if(symb>='0'&&symb<='9')
            Push(symb-'0');
    
        else
        {
            a=Pop();
            b=Pop();
            value=evaluate(a,b,symb);
            Push(value);
        }
        i++;
    }
    y=Pop();
    printf("answer is:- %d",y);
    return 0;
}
    