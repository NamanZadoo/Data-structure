#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct node
{
    int info;
    struct node *next;
};
/*************/
struct node *start;
/*************/
struct node *GetNode()
{
    struct node *p;
    p =(struct node*)malloc(sizeof(struct node));
    return p;
}
/*************/
void InsEnd(struct node **start,int x)
{
    struct node *q,*p;
    q=*start;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    p=GetNode();
    p->info=x;
    p->next=NULL;
    q->next=p;
}
/*************/
void InsBeg(struct node **start,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->next=*start;
    *start=p;
}
/*************/
void Traverse(struct node *start)
{
    struct node *p;
    p=start;
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->next;
    }
}
/*************/
void InsAft(struct node **q,int x)
{
    struct node *r;
    struct node*p;
    p=GetNode();
    p->info=x;
    r = (*q)->next;
    p->next=p;
    (*q)->next=p;
}
/*************/
int cycleDetection(struct node *start)
{
    struct node *t,*r;
    t=start;
    r=start;
    while(r!=NULL&&r->next!=NULL)
    {
        t=t->next;
        r=r->next;
        r=r->next;
        if(t==r)
        {
            printf("cycle");
            return TRUE;
        }
    }
    printf("not cycle");
    return FALSE;
}
/*************/
int cycleLength(struct node *start)
{
    struct node *t,*r;
    t=start;
    r=start;
    while(r!=NULL&&r->next!=NULL)
    {
        t=t->next;
        r=r->next;
        r=r->next;
        if(t==r)
            break;
    }
    int c=0;
    do
    {
        c++;
        t=t->next;
    } while (t!=r);
    return c;
}
/*************/
void cycleStartPoint(struct node *start)
{
    struct node *t,*r;
    t=start;
    r=start;
    while(r!=NULL&&r->next!=NULL)
    {
        t=t->next;
        r=r->next;
        r=r->next;
        if(t==r)
            break;
    }
    t=start;
    while(t!=r)
    {
        t=t->next;
        r=r->next;
    }
    printf("the starting point of cycle is: %d",r->info);
}
/*************/
int main()
{
    start=NULL;
    struct node *p,*q;
    InsBeg(&start,100);
    InsBeg(&start,200);
    InsBeg(&start,300);
    InsBeg(&start,400);
    InsBeg(&start,500);
    InsBeg(&start,600);
    InsBeg(&start,700);
    InsEnd(&start,10);
    InsEnd(&start,20);
    InsEnd(&start,30);
    p=start;
    while(p->next!=NULL)
        p=p->next;
    q=start;
    while(q->info!=400)
        q=q->next;
    p->next=q;
    cycleDetection(start);
    int x=0;
    x=cycleLength(start);
    printf(" %d ",x);
    printf("\n");
    cycleStartPoint(start);
    return 0;
}