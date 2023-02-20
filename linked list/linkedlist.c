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
int CountNode()
{
    int c=0;
    struct node*q;
    q=start;
    while(q->next!=0)
    {
        c++;
        q=q->next;
    }
    printf("\n%d",c);
    return 0;
}
/*************/
int EvenOdd()
{
    int c1=0,c2=0;
    struct node *q;
    q=start;
    while(q!=NULL){
        if((q->info)%2==0){
            c1++;
        }
        else c2++;
        q=q->next;
    }
    printf("Even= %d,Odd= %d",c1,c2);
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
int MiddleElement(struct node *start)
{
    struct node *t,*r;
    t=start;
    r=start;
    while(r!=NULL&&r->next!=NULL)
    {
        t=t->next;
        r=r->next;
        r=r->next;
    }
    return t->info;
}
/*************/
int main()
{
    start=NULL;
    struct node *p;
    int x;
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
    InsEnd(&start,40);
    Traverse(start);
    EvenOdd();
    CountNode();
    InsAft(&start,40);
    printf("\n");
    Traverse(start);
    printf("\n");
    x=MiddleElement(start);
    printf("%d",x);
    return 0;
    
}
