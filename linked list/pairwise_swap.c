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
void PairWiseSwap(struct node **start)
{
    struct node*p,*q;
    int x;
    p=*start;
    q=(*start)->next;
    while(q!=NULL)
    {
        x=p->info;
        p->info=q->info;
        q->info=x;
        p=p->next->next;
        q=q->next;
        if(q!=NULL)
            q=q->next;
    }
    Traverse(*start);
}
/*************/
int main()
{
    struct node *start2;
    InsBeg(&start,1);
    InsEnd(&start,2);
    InsEnd(&start,3);
    InsEnd(&start,4);
    InsEnd(&start,5);
    InsEnd(&start,6);
    InsEnd(&start,7);
    InsEnd(&start,8);
    InsEnd(&start,9);
    InsEnd(&start,10);
    Traverse(start);
    printf("\n");
    PairWiseSwap(&start);
    return 0;


}