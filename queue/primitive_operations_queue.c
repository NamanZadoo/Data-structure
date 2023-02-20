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
void Initialize(struct Queue *q)
{
    q->front=0;
    q->rear=-1;
}
/*****************/
int IsEmpty(struct Queue *q)
{
    if(q->rear - q->front+1 ==0)
        return TRUE;
    else
        return FALSE;
}
/****************/
void EnQueue(struct Queue *q , char x)
{
    if(q->rear==MAXQUEQUE-1)
    {
        printf("QUEUE OVERFLOWS");
        exit(1);
    }
    q->rear++;
    q->item[q->rear]=x;
}
/****************/
char DeQueue(struct Queue *q)
{
    char x;
    if(IsEmpty(q))
    {
        printf("QUEUE UNDERFLOWS");
        exit(1);
    }
    x=q->item[q->front];
    q->front++;
    return x;
}
/***************/
int main()
{
    char y;
    struct Queue myQ;
    Initialize(&myQ);
    EnQueue(&myQ,'A');
    EnQueue(&myQ,'B');
    EnQueue(&myQ,'C');
    EnQueue(&myQ,'D');
    EnQueue(&myQ,'E');
    EnQueue(&myQ,'F');
    EnQueue(&myQ,'G');
    EnQueue(&myQ,'A');
    EnQueue(&myQ,'B');
    EnQueue(&myQ,'C');
    EnQueue(&myQ,'D');
    EnQueue(&myQ,'E');
    EnQueue(&myQ,'F');
    EnQueue(&myQ,'G');
    EnQueue(&myQ,'A');
    EnQueue(&myQ,'B');
    EnQueue(&myQ,'C');
    EnQueue(&myQ,'D');
    EnQueue(&myQ,'E');
    EnQueue(&myQ,'F');
    EnQueue(&myQ,'G');
    y=DeQueue(&myQ);
    printf("\n%c",y);
    y=DeQueue(&myQ);
    printf("\n%c",y);
    y=DeQueue(&myQ);
    printf("\n%c",y);
    y=DeQueue(&myQ);
    printf("\n%c",y);
    y=DeQueue(&myQ);
    printf("\n%c",y);
    y=DeQueue(&myQ);
    printf("\n%c",y);
    y=DeQueue(&myQ);
    printf("\n%c",y);
    y=DeQueue(&myQ);
    printf("\n%c",y);
    return 0;  
}


