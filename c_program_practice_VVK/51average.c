#include<stdio.h>
int main()
{
    int a[20],i,n;
    float sum=0;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    printf("Average of array is %0.2f\n",sum/5);
}
