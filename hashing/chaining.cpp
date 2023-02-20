#include<stdio.h>
/***************/
void linearserach(int a[])
{
    int b=20;
    int n=0;
    printf("enter the element :\t");
    scanf("%d",&n);
    for(int i=0;i<=b-1;i++)
    {
        if(n==a[i])
        {
            printf("%d",i);
            break;
        }
        if(i>=b-1)
        {
            printf("element not found");
        }
    }
}
/**************/

int main()
{
    int a[100];
    int n=0,i=0;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter sorted array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    linearserach(a);
    return 0;
    
}
