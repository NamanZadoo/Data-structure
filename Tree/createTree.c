#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
/***********/

struct node* makenode(char x){   
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
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
        p=makenode(x);
        (*t)->left=p;
        createtree(&p);
    }
    printf("whether the right exists?(1/0)%d",(*t)->data);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("input the data of right?%d",(*t)->data);
        scanf("%d",&x);
        p=makenode(x);
        (*t)->right=p;
        createtree(&p);
    }
}
void preordertraverse(struct node *t){
    if(t!=NULL){
        printf("%d ",t->data);
        preordertraverse(t->left);
        preordertraverse(t->right);
    }
}
void inordertraverse(struct node *t){
    if((t)!=NULL){
        inordertraverse(t->left);
        printf("%d ",t->data);
        inordertraverse(t->right);
    }
}
void postordertraverse(struct node *t){
    if(t!=NULL){
        postordertraverse(t->left);
        postordertraverse(t->right);
        printf("%d ",t->data);
    }
}
int count(struct node *t)
{
    if((t)==NULL)
    {
        return 0;
    }
    else{
        return 1+count((t)->left)+count((t)->right);
    }
}
int countleaf(struct node *t)
{
    if((t)==NULL)
    {
        return 0;
    }
    else 
        if(t->left==NULL && t->right==NULL)
        {
            return 1;
        }else{
            return countleaf(t->left)+countleaf(t->right);
        }
}
int countn2(struct node *t)
{
    /* data */
    if(t==NULL)
    {
        return 0;
    }
    else
        if(t->left==NULL && t->right==NULL)
        {
            return 0;
        }
        else
            if(t->left!=NULL && t->right!=NULL)
            {
                return 1+countn2(t->left)+countn2(t->right);
            }
            else{
                return countn2(t->left)+countn2(t->right);
            }
}
int countn1(struct node *t)
{
    /* data */
    if(t==NULL)
    {
        return 0;
    }
    else
        if(t->left==NULL && t->right==NULL)
        {
            return 0;
        }
        else
            if(t->left!=NULL && t->right!=NULL)
            {
                return countn1(t->left)+countn1(t->right);
            }
            else{
                return 1+countn1(t->left)+countn1(t->right);
            }
};




int main(){
    struct node *root=NULL;
    int x;
    printf("enter the data of the root node");
    scanf("%d",&x);
    root=makenode(x);
    
    createtree(&root);
    printf("pre order traversel is=>");
    
    preordertraverse(root);
    printf("\n");
    printf("post order traversel is=>");
    postordertraverse(root);
    printf("\n");
    printf("in order traversel is=>");
    inordertraverse(root); 
    printf("\n");
    int a=0;
    a=count(root);
    printf("%d\n",a);
    a=countleaf(root);
    printf("%d\n",a);
    a=countn2(root);
    printf("%d\n",a);
    a=countn1(root);
    printf("%d\n",a);
    return 0;
}