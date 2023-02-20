#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
    struct node *parent;
};
/***********/

struct node* makenode(int x){   
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->parent=NULL;
    return p;
}
void BST_insert(struct node **t,int x)
{
    struct node *p,*q;
    p=*t;
    q=NULL;
    if(*t==NULL)
        *t=makenode(x);
    
    else
    {
         while(p!=NULL)
        {
            q=p;
            if(x<p->data)
                p=p->left;
            else p=p->right;
        }
    
        if(x<q->data)
            q->left=makenode(x);
        else 
            q->right=makenode(x);
    }
}
struct node *BST_search(struct node *t,int key)
{
    while(t!=NULL)
    {
        if(t->data==key)
            return t;
        else
            if(key<t->data)
                t=t->left;
            else    
                t=t->right;
    }
    return NULL;
}

int max(struct node *t)
{
    while(t->right!=NULL)
    {
        (t)=(t)->right;
    }
    return t->data;
}

int min(struct node *t)
{
    while((t)->left!=NULL)
    {
        (t)=(t)->left ;
    }
    return t->data;
}

int BST_sucessor(struct node *p)
{
    struct node *q;
    if(p->right!=NULL)
        min(p->right);
    else
    {
        q=p->parent;
        while(q!=NULL && q->right==p)
        {
            p=q;
            q=q->parent;
        }
    }
    return q;
}

void InOrderedTraversal(struct node *t)
{
    if(t!=NULL)
    {
        InOrderedTraversal(t->left);
        printf("%d ",t->data);
        InOrderedTraversal(t->right);
    }
}
int main()
{
    struct node *root=NULL,*p,*s;
    int x,a,b;
    BST_insert(&root,100);
    BST_insert(&root,50);
    BST_insert(&root,70);
    BST_insert(&root,130);
    BST_insert(&root,150);
    BST_insert(&root,20);
    BST_insert(&root,40);
    InOrderedTraversal(root);
    printf("enter the key: ");
    scanf("%d",&x);
    p=BST_search(root,x);
    printf(" %lld , %d",p,p->data);
    s=BST_sucessor(p);
    printf("\n sucessor is %d ",s->data);
    a=min(root);
    b=max(root);
    printf("\n min=%d  max=%d",a,b);
    return 0;
}