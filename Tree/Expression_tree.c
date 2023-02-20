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
/********************************/
int prcd(char a,char b){
    if(a=='^' || a=='*' || a=='/' || a=='%'){
        if(b=='^'){
            return FALSE;
        }
        else{
            return TRUE;
        }
    }
    else{
        if(b=='+' || b=='-'){
            return TRUE;
        }
        else{
            return FALSE;
        }
    }
}
/********************************/
struct node makenode(){   
    struct node p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->next=NULL;
    return p;
}
/********************************/
buildExpressionTree(exp[])
{
    int i=0;
    char symb,a,b,op;
    initialise();
    struct node x,t;
    while (!IsEmpty1(exp[i]))
    {
        symb=exp[i];
        if(symb>='a' || symb<='b')
        {
            x=makenode();
            Push1(x);
        }
        else
        {
            while((!IsEmpty2) && prcd(TOP2))
            {
                op=Pop1();
                t=makenode();
                b=Pop2();
                a=Pop2();
                t->left=a;
                t->right=b;
                Push2(t);
            }
            Push1(symb);
        }
    }
    while(!IsEmpty1())
    {
        op=Pop1();
        t=makenode();
        b=Pop2();
        a=Pop2();
        t->left=a;
        t->right=b;
        Push2(t);
    }
    return Pop2();
}
/********************************/

int main(){
    char infix[20];
    gets(infix);
    infixtopost(infix);
}