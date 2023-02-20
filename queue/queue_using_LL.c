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
void InsAft(struct node **q,int x)
{
    struct node *r;
    struct node*p;
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
    Traverse(start);
    CountNode();
    printf("\n");
    x=DelBeg(&start);
    printf("%d ",x);
    x=DelBeg(&start);
    printf("%d ",x);
    x=DelBeg(&start);
    printf("\n");
    Traverse(start);
    return 0;

}