#include<stdio.h>
int main()
{
    int a[20],i,n,sum=0;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before reverse array :");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    printf("\nAfter reversing array element :");
    for(i=n-1;i>=0;i--)
    {
       printf(" %d",a[i]);
    }

}

