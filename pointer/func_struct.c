#include<stdlib.h>
#include<stdio.h>
struct student 
{
    int rollno;
    char name[20];
    double perc;
};
void input(struct student *ptr,int n)
{
    for(int i=0;i<n;i++)
        scanf("%d%s%lf",&((ptr+i)->rollno),(ptr+i)->name,&((ptr+i)->perc));
}
void output(struct student *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d %s %0.2lf",(ptr+i)->rollno,(ptr+i)->name,(ptr+i)->perc);
        printf("\n");
    }
}
int main(){
    struct student *ptr;
    int n;
    printf("how many students:\t");
    scanf("%d",&n);
    ptr=(struct student*)malloc(n*sizeof(struct student));
    input(ptr,n);
    output(ptr,n);
    return 0;   
}
