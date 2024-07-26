#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},b[5],size,i;
    printf("array a element are :");
    for (i=0;i<5;i++)
    {
        printf("%d ",a[i]);
        b[i]=a[i];
    }
    printf("\n after the copying the b array element:");
    for (i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }
}
