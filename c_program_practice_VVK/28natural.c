#include<stdio.h>
int main()
{
    int size;
    printf("enter the number sum upto  :");
    scanf("%d",&size);
    int i,sum=0;
    for(i=1;i<=size;i++)
    {
        sum=sum+i;
    }
    printf("sum of natural upto %d = %d",size,sum);
}
