#include<stdio.h>
int main()
{
    int a[10],size,i,pass,temp=0;
    printf("enter the size :");
    scanf("%d",&size);
    printf("enter the array element \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(pass=0;pass<size-1;pass++)
    {
        for(i=0;i<size-pass-1;i++)
        {
            if (a[i]>a[i+1])
            {
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
            }
        }
    }
    printf("array after booble short \n");
    for(i=0;i<size;i++)
    {
        printf(" %d",a[i]);
    }
}
