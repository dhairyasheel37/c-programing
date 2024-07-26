#include<stdio.h>
int main()
{
    int a[20],i,n,sum=0,min;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }

    printf("Smallest element of array is %d",min);
}
