#include<stdio.h>
int main()
{
    int a=1,b=1,i,temp=0,size;
    printf("Enter the size :");
    scanf("%d",&size);
    printf("%d %d ",a,b);

    for(i=2;i<size;i++)
    {
        temp=a+b;
        printf("%d ",temp);
        a=b;
        b=temp;
    }
}
