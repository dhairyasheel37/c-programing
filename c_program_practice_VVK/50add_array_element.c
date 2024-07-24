#include<stdio.h>
int main()
{
    int a[20],i,n,sum=0;
    printf("enter the size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    printf("sum of array is %d",sum);
}
