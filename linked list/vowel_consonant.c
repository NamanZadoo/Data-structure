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
int DelBeg(struct node **start)
{
    struct node *p;
    p= *start;
    (*start)=(*start)->next;
    int x=p->info;
    free(p);
    return x;
    
}
/*************/
int DelEnd(struct node **start)
{
    int x;
    struct node *p,*q;
    p=*start;
    q=NULL;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;
}
/**********/
int DelAft(struct node **p)
{
    int x;
    struct node *q,*r;
    q=(*p)->next;
    r=q->next;
    (*p)->next=r;
    x=q->info;
    free(q);
    return x;
}
/*************/
int VowCon(struct node **start)
{
    struct node *p,*q,*r;
    

}