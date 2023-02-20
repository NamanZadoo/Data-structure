#include<stdio.h>
int binarysearch(int a[],int low,int high)
{
    int mid=0,n=0,b=20;
    printf("enter the element:\t");
    scanf("%d",&n);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==n)
        {
            printf("position of element in array is:\n");
            printf("%d",mid);
            break;
        }
        else
        {
            if(n<a[mid])
            {
                high=mid-1;
            }
            else
            {
                low=low+1;
            }
        }
    }
    if(low>=high && n!=a[mid])
    {
        printf("element not found");
    }
    return (-1);

}
int main()
{
    int a[20];
    int i;
    int b=0;
    printf("enter size of array:");
    scanf("%d",&b);
    printf("enter sorted array: ");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    int low=0,high=b-1;
    binarysearch(a,low,high);
    return 0;
    
}
