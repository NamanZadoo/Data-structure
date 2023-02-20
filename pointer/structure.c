#include<stdlib.h>
#include<stdio.h>
struct student 
{
    int rollno;
    char name[20];
    double per;
};
int main(){
    struct student s;
    int n;
    scanf("%d%s%lf",&s.rollno,s.name,&s.per);
    printf("%d %s %0.2lf",s.rollno,s.name,s.per);
    return 0;   
}