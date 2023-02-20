#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *next;
};
struct node*rear,*front;

struct node *makenode(struct node **front,struct node **rear,int x)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void Initialize(struct node **rear ,struct node **front)
{
    rear=NULL;
    front=NULL;
}

void Enqueue(struct node **front , struct node **rear,struct node *p)
{
    if(rear!=NULL){
        (*rear)->next=p;
        *rear=p;
    }
    else 
        *front=p;
    *rear=p;
}
struct node *Dequeue(struct node **front ,struct node **rear)
{
    struct node *p;
    p=*front;
    *front=(*front)->next;
    if(front==NULL)
        rear=NULL;
    return p;
}

int IsEmpty(struct node **front)
{
    if((*front)==NULL)
        return TRUE;
    else 
        return FALSE;
}

struct node  *createtree(struct node **t)
{
    int choice,x;
    struct node *p;
    printf("whether the left exists?(1/0)%d",(*t)->data);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("input the data of left?%d",(*t)->data);
        scanf("%d",&x);
        p=makenode(&front,&rear,x);
        (*t)->left=p;
        createtree(&p);
    }
    printf("whether the right exists?(1/0)%d",(*t)->data);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("input the data of right?%d",(*t)->data);
        scanf("%d",&x);
        p=makenode(&front,&rear,x);
        (*t)->right=p;
        createtree(&p);
    }
} 
void LevelOrderedtraversal(struct node *t)
{
    Initialize(&front,&rear);
    struct node *p;
    Enqueue(&front,&rear,t);
    while(!IsEmpty(&front))
    {
        p=Dequeue(&front,&rear);
        printf("\t%d",p->data);
        if(p->left!=NULL)
            Enqueue(&front,&rear,p->left);
        if(p->right)
            Enqueue(&front,&rear,p->right);
    }
}
int main(){
    struct node *root=NULL;
    int x;
    printf("enter the data of the root node");
    scanf("%d",&x);
    root=makenode(&front,&rear,x);  
    createtree(&root);
    printf("\n");
    LevelOrderedtraversal(root);
    return 0;
}

