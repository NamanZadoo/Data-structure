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
char stacktop(struct stack *fs)
{
    int x;
    x=s->item[s->TOP];
    return x;
}
/****************/
void Initialize(struct stack *fs)
{
    s->TOP=-1;
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
void Push(struct stack *fs ,int x)
{
    if(s->TOP==STACKSIZE-1)
    {
        printf("\nstack overflows");
        exit(1);
    }
    s->TOP++;
    s->item[s->TOP]=x;
}
/**************/
int Pop(struct stack *fs)
{
    int x;
    if(IsEmpty())
    {
        printf("\n stack overflows:");
        exit(1);
    }
    x=s->item[s->TOP];
    s->TOP--;
    return x;
}
/************/
int main()
{
    int x;
    struct stack fs;
    Initialize(&fs);
    Push(&fs,100);
    Push(&fs,200);
    Push(&fs,300);
    Push(&fs,400);
    Push(&fs,800);
    Push(&fs,900);
    Push(&fs,2300);
    Push(&fs,3200);
    Push(&fs,1200);
    Push(&fs,1300);
    x=Pop(&fs);
    printf("\n%d",x);
    x=Pop(&fs);
    printf("\n%d",x);
    x=Pop(&fs);
    printf("\n%d",x);
    x=Pop(&fs);
    printf("\n%d",x);
    x=Pop(&fs);
    printf("\n%d",x);
    x=Pop(&fs);
    printf("\n%d",x);
    x=Pop(&fs);
    printf("\n%d",x);

    return 0;

}
