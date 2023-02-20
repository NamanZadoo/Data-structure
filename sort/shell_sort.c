#include<stdio.h>
void shellsort(int a[],int n)
{
     int gap;
     int c=0;
    for(gap=n/2;gap>=1;gap=gap*(.5))
    {
        for(int j=gap;j<n;j++)
        {
            for(int i=j-gap;i>=0;i=i-gap)
            {
                if(a[i+gap]>a[i])
                {
                    break;
                }
                else
                {
                    c=a[i+gap];
                    a[i+gap]=a[i];
                    a[i]=c;
                }
            }
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        printf(" %d ",a[i]);
    }
}
int main()
{
    int a[20];
    int n;
    printf("enter size of array\t");
    scanf("%d",&n);
    printf("enter elemtnts:\t");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    shellsort(a,n);
    return 0;


}