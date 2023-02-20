#include<stdio.h>
#include<stdlib.h>
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
    struct node *p;
    p=GetNode();
    p->info=x;
    r = (*q)->next;
    p->next=r;
    (*q)->next=p;
}
/*************/
void splitLL(struct node **start)
{
    struct node*t,*r,*start2;
    t=*start;
    r=(*start)->next;
    while(r!=NULL&&r->next!=NULL)
    {
        t=t->next;
        r=r->next;
        r=r->next;
    }
    start2=t->next;
    t->next=NULL;
    Traverse(*start);
    printf("\n");
    Traverse(start2);
}
/*************/
int main()
{
    struct node *start2;
    InsBeg(&start,100);
    InsBeg(&start,200);
    InsBeg(&start,300);
    InsBeg(&start,400);
    InsBeg(&start,500);
    InsBeg(&start,600);
    InsBeg(&start,700);
    InsEnd(&start,800);
    InsEnd(&start,900);
    InsEnd(&start,1000);
    Traverse(start);
    printf("\n");
    splitLL(&start);
    return 0;

}
