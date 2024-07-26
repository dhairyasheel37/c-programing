#include<stdio.h>
int main()
{
    int a[20],i,n,max;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    printf("Largest element of array is %d",max);
}

