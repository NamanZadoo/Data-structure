#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/****************/
int partition(int a[],int low, int high)
{
    srand(time(0));
    int random = low + rand()%(high-low);
    int t;
    t=a[low];
    a[low]=a[random];
    a[random]=t;
    int i=low,j=high+1;
    int pivot=a[low];
    int c;
    do
    {
        do
        {
            i++;
        } while (a[i]<pivot);
        do
        {
            j--;
        } while (a[j]>pivot);
        if(i<j)
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
        
    }while(i<j);

    c=a[j];
    a[j]=a[low];
    a[low]=c;
    return j;
}
/****************/
void quicksort(int a[],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
/****************/
int main()
{
    int a[100];
    int i,n;
    printf("enter size of array:\t ");
    scanf("%d",&n);
    a[n]=__INT_MAX__;
    printf("enter the elemtnts:\t");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n);
    for(i=0;i<=n-1;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}