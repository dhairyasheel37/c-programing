#include<stdio.h>
int main()
{
    int a[10],i,size,d;
    printf("enter the size :");
    scanf("%d",&size);
    printf("Enter the array element");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the delete element location :");
    scanf("%d",&d);
    d=d-1;
    for(i=d;i<size;i++)
    {
        a[i]=a[i+1];
    }
    printf("After the delet element :");
    for(i=0;i<size-1;i++)
    {
        printf(" %d",a[i]);
    }
}
