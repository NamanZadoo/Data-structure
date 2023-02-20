#include<stdio.h>
#include<stdlib.h>
struct node
{
    int exp;
    int coff;
    struct node *next;
};
/*************/
struct node *GetNode()
{
    struct node *p;
    p =(struct node*)malloc(sizeof(struct node));
    return p;
}
/*************/
void InsEnd(struct node **start,int c,int e)
{
    struct node *q,*p;
    q=*start;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    p=GetNode();
    p->coff=c;
    p->exp=e;
    p->next=NULL;
    q->next=p;    
}
/*************/
void InsBeg(struct node **start,int c,int e)
{
    struct node *p;
    p=GetNode();
    p->coff=c;
    p->exp=e;
    p->next=*start;
    *start=p;
}
/*************/
void Traverse(struct node **start)
{
    struct node *p;
    p=*start;
    while(p!=NULL)
    {
        printf("%dx^%d + ",p->coff,p->exp);
        p=p->next;
    }
}
/************/
void PolyAdd(struct node **poly1,struct node **poly2)
{
    struct node *poly3,*p,*q;
    poly3=NULL;
    p=*poly1;
    q=*poly2;
    while(p!=NULL&&q!=NULL)
    {
        if(p->exp==q->exp)
        {
            InsEnd(&poly3,(p->coff)+(q->coff),p->exp);
            p=p->next;
            q=q->next;
        }
        else
        {
            if((p->exp)>(q->exp))
            {
                InsEnd(&poly3,p->coff,p->exp);
                p=p->next;
            }
            else
            {
                InsEnd(&poly3,q->coff,q->exp);
                q=q->next;
            }
        } 
    }
    while(p!=NULL)
    {
        InsEnd(&poly3,p->coff,p->exp);
        p=p->next;
    }
    while(q!=NULL)
    {
        InsEnd(&poly3,q->coff,q->exp);
        q=q->next;
    } 
    Traverse(&poly3);
}
/************/
int main()
{
    struct node *start1,*start2;
    start1=NULL;
    start2=NULL;
    InsBeg(&start1,3,5);
    InsEnd(&start1,-4,3);
    InsEnd(&start1,2,2);
    InsEnd(&start1,9,1);
    InsEnd(&start1,-8,0);
    InsBeg(&start2,7,6);
    InsEnd(&start2,2,5);
    InsEnd(&start2,-1,4);
    InsEnd(&start2,3,3);
    InsEnd(&start2,7,2);
    Traverse(&start1);
    Traverse(&start2);
    PolyAdd(&start1,&start2);
    return 0;
}

