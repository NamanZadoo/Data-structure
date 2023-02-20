#include<stdio.h>
#include<math.h>
/******************/
int nearest_prime(int ts)
{   
    int i=0,j=0;
    int flag=0;
    for(i=ts;i>=2;i--)
    {
         for (j=2;j<=sqrt(i);j++) 
        {
            if (i%j==0)
                break;
        }
       if(j>sqrt(i))
            return i;
            
    }
    if (flag==1) 
        return 0;
    else
        return 1;

}
/******************/
int hash(int key,int ts)
{
    int np=0;
    int l=0;
    np=nearest_prime(ts);
    l=key%np;
    return l;
}

/*******************/
int main()
{
    int key, ts;
    int n;
    int a[100];
    printf("enter table size \t");
    scanf("%d",&ts);
    printf("enter no. of elements: \t");
    scanf("%d",&n);
    printf("enter the key: \t");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        a[i]=hash(a[i],ts);
        printf("%d ",a[i]);
    }
    return 0;

}
