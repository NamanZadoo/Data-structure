#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
    //struct node*h;
    int h;
};

struct node*makenode(int x){
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->h=0;
    return p;
}

void inorderTraversal(struct node*t){
    if(t!=NULL){
        inorderTraversal(t->left);
        printf("%d ", t->data);
        inorderTraversal(t->right);
    }
}

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

struct node*leftrotation(struct node*x){
    struct node*y,*z;
    y=x->right;
    z=y->left;
    y->left=x;
    x->right=z;
    return y;
}
struct node*rightrotation(struct node*x){
    struct node*y,*z;
    y=x->left;
    z=y->right;
    y->right=x;
    x->left=z;
    return y;
}

struct node*ll(struct node*x){
    struct node*y;
    y=rightrotation(x);
    return y;
}
struct node*rr(struct node*x){
    struct node*y;
    y=leftrotation(x);
    return y;
}
struct node*lr(struct node*x){
    struct node*y,*z,*t;
    y=x->left;
    z=leftrotation(y);
    x->left=z;
    t=rightrotation(x);
    return t;
    
}
struct node*rl(struct node*x){
    struct node*y,*z,*t;
    y=x->right;
    z=rightrotation(y);
    x->right=z;
    t=leftrotation(x);
    return t;
}


int height(struct node*t){
    int hl,hr;
    if(t==NULL){
        return 0;
    }
    if(t->left==NULL){
        hl= 0;
    }
    else{
        hl= 1+t->left->h;
    }
    if(t->right==NULL){
        hr= 0;
    }
    else{
        hr= 1+t->right->h;
    }
    return max(hl,hr);
    
}
int balancefactor(struct node*t){
    int hl,hr;
    if(t==NULL){
        return 0;
    }
    if(t->left==NULL){
        hl= 0;
    }
    else{
        hl= 1+t->left->h;
    }
    if(t->right==NULL){
        hr= 0;
    }
    else{
        hr= 1+t->right->h;
    }
    return hl-hr;
    
}

struct node* avlInsert(struct node*t, int x){
    if(t==NULL)
    {
        t=makenode(x);
    }
    else
    {
        if(x<t->data){
            t->left=avlInsert(t->left,x);
            if(balancefactor(t)==2)
            {
                if(x<t->left->data)
                {
                    t=ll(t);
                }
                else
                {
                    t=lr(t);
                }
            }
        }
        else
        {
            t->right=avlInsert(t->right,x);
            if(balancefactor(t)== -2)
            {
                if(x>t->right->data)
                {
                    t=rr(t);
                }
                else
                {
                    t=rl(t);
                }
            }
        }
    }
    t->h=height(t);
    return t;
}

int main(){
   struct node*root=NULL;
   root=avlInsert(root,100);
   root=avlInsert(root,50);
   root=avlInsert(root,40);
   root=avlInsert(root,70);
   root=avlInsert(root,150);
   root=avlInsert(root,60);
   

   inorderTraversal(root);
   printf("\n");
}
