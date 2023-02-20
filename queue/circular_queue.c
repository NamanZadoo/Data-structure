 #include<stdio.h>
#include<stdlib.h>
#define MAXQUEQUE 40
#define TRUE 1
#define FALSE 0
struct Queue 
{
    char item[MAXQUEQUE];
    int front;
    int rear;
    
};
/******************/
void Initialize(struct Queue *cq)
{
    cq->front=0;
    cq->rear=-1;
}
/*****************/
int IsEmpty(struct Queue *cq)
{
    if(cq->rear - cq->front+1 ==0)
        return TRUE;
    else
        return FALSE;
}
/****************/
void EnQueue(struct Queue *cq , char x)
{
    if(cq->rear==MAXQUEQUE-1)
    {
        printf("QUEUE OVERFLOWS");
        exit(1);
    }
    cq->rear++;
    cq->item[cq->rear]=x;
}
/****************/
char DeQueue(struct Queue *cq)
{
    char x;
    if(IsEmpty(cq))
    {
        printf("QUEUE UNDERFLOWS");
        exit(1);
    }
    x=cq->item[cq->front];
    cq->front++;
    return x;
}
/***************/
int main()
{
    char y;
    struct Queue myQ;
