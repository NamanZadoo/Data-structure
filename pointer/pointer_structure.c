#include<stdio.h>
#include<stdlib.h>
struct student
{
    int rollno;
    char name[20];
    double per;
};
int main()
{
    int i=0;
    struct student s[5];
    struct student *ptr;
    ptr=&s;
    for(i=0;i<5;i++)
    {
        scanf("%d%s%lf",&((ptr+i)->rollno),(ptr+i)->name,&((ptr+i)->per));
    }
    
    for(i=0;i<5;i++)
    {
        printf("%d %s %0.2lf",(ptr+i)->rollno,(ptr+i)->name,(ptr+i)->per);
        printf("\n");
    }
    return 0;
    
}