#include<stdio.h>
#include<stdlib.h>
struct student
{
    int rollno;
    char name[20];
    double perc;
};
int main()
{
    struct student *ptr;
    int n;
    printf("how many students:\t");
    scanf("%d",&n);
    ptr=(struct student*)malloc(n*sizeof(struct student));
    for(int i=0;i<n;i++)
    {
        scanf("%d%s%lf",&((ptr+i)->rollno),(ptr+i)->name,&((ptr+i)->perc));
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d %s %0.2lf",(ptr+i)->rollno,(ptr+i)->name,(ptr+i)->perc);
        printf("\n");
    }
    return 0;
}