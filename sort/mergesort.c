#include<stdio.h>
void mergearray(int a[],int low,int mid,int high)
{
    int c[100];
    int i=low,j=mid+1,k=low;
    while(j<=high && i<=mid)
    {
        if(a[i]>a[j])
        {
            c[k]=a[j];
            k++;
            j++;
        }
        else
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
        while(i<=mid)
        {
            c[k]=a[i];
            k++;
            i++;
        }
        while(j<=high)
        {
            c[k]=a[j];
            k++;
            j++;
        }
        for(int p=low;p<=high;p++)
        {
            a[p]=c[p];
        }
    
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {   
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        mergearray(a,low,mid,high);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[20];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int low=0,high=n-1;
    mergesort(a,low,high);
    for(int i=0;i<n;i++)
    {
       printf(" %d ",a[i]);
    }
}