#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct node{
    int coeff;
    int expo;
    struct node *next;
};

struct node* getnode(){
    struct node*p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}

int traverse(struct node *start){
    struct node*p;
    p=start; 
    while(p!=NULL){

        printf("%dx%d ", p->coeff , p->expo);
       
        p=p->next;
    }
    printf("\n");
}

void insertbeggining(struct node**start,int x,int y){
    struct node*p;
    p=getnode();
    p->coeff=x;
    p->expo=y;
    p->next=*start;
    *start=p;
}

void insertend(struct node**start,int x,int y){
    struct node*p,*q;
    q=*start;
    if(q==NULL){
        insertbeggining(start,x,y);
    }

    else{
        while(q->next!=NULL){
        q=q->next;
    }
    p=getnode();
    p->coeff=x;
    p->expo=y;
    p->next=NULL;
    q->next=p;
    }
    
}
void insertafter(struct node **q, int x,int y){
    struct node *p,*r;
    p=getnode();
    p->coeff=x;
    p->expo=y;
    r=(*q)->next;  
    p->next=r;    
    (*q)->next=p;
}

void orderedinsertion(struct node** start, int x , int y){
    struct node *p, *q;
    p=(*start);
    q=NULL;
    while(p!=NULL && y>=p->expo){
        q=p;
        p=p->next;
    }
    if (q==NULL){
        insertbeggining(start,x,y);
    }
    else{
        insertafter(&q,x,y);
    }
}

void mergeLL(struct node*start1, struct node*start2){
    struct node*p,*q;
    struct node *start3;
    p=start1;
    q=start2;
    start3=NULL;
    while(p!=NULL && q!=NULL){
        if((p->expo)<(q->expo)){
            insertend(&start3, p->coeff , p->expo);
            p=p->next;
        }
        else{
            insertend(&start3, p->coeff, q->expo);
            q=q->next;
        }

    }
    while(p!=NULL){
        insertend(&start3, p->coeff, q->expo);
        p=p->next;
    }
    while(q!=NULL){
        insertend(&start3, q->coeff, q->expo);
        q=q->next;
    }
    traverse(start3);
}

int polyadd(struct node *start1,struct node *start2){
    struct node *start3 = NULL;
    struct node *p,*q;
    p=start1;
    q=start2;
    while (p!=NULL && q!=NULL){
        if (p->expo == q->expo){
            insertend(&start3, (p->coeff)+(q->coeff), p->expo);
            p=p->next;
            q=q->next;
        }
        else if (p->expo > q->expo){
            insertend(&start3, p->coeff , p->expo);
            p=p->next;
        }
        else
        {
            insertend(&start3, q->coeff , q->expo);
            q=q->next;
        }
    }
     while (p!=NULL){
        insertend(&start3, p->coeff , p->expo);
            p=p->next;
     }
    while (q!=NULL){
        insertend(&start3, q->coeff , q->expo);
            q=q->next;
     }
    traverse(start3);
    
}
int polysub(struct node *start1,struct node *start2){
    struct node *start3 = NULL;
    struct node *p,*q;
   
    q=start2;
    while (q!=NULL){
       q->coeff = -(q->coeff);
       q=q->next;
    }
     polyadd(start1,start2);
    traverse(start3);
    
}
int reverse (struct node *start1){
    struct node *c,*p,*n;
    c=start1;
    p=NULL;
    n=c->next;
    while(c!=NULL)
    {
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL)
        {
            n=n->next;
        }
        start1=p;
        
    } 
    traverse (start1);
}
int main(){
    struct node *start1,*start2;
    start1 = NULL;
    start2 = NULL;
    
    struct node*p,*q;

insertbeggining(&start1,2,3);
insertbeggining(&start1,3,4);
insertbeggining(&start1,4,2);
insertbeggining(&start1,7,7);
insertbeggining(&start1,2,2);
insertbeggining(&start1,9,6);
traverse(start1);
insertbeggining(&start2,4,3);
insertbeggining(&start2,6,4);
insertbeggining(&start2,8,2);
insertbeggining(&start2,2,7);
insertbeggining(&start2,9,2);
insertbeggining(&start2,3,6);
traverse(start2);
polyadd(start1,start2);
polysub(start1,start2);
reverse(start1);
}