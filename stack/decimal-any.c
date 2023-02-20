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
    char str[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int rem,div;
    char x;
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    printf(" enter the conversion value: ");
    scanf("%d",&div);
    int i=0;
    while(num!='\0')
    {
        rem=num%div;
        Push(rem);
        num=num/div;
    }
    while (!IsEmpty())
    {
        x=Pop();
        printf(" %c ",str[x]);
    }
    return 0;
    

}