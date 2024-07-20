#include<stdio.h>
int main()
{
    int no,r,sum;
    int i=0;
    printf("Enter the number :");
    scanf("%d",&no);
    while(no>0)
    {
        r=no%10;
        sum=sum*10+r;
        no=no/10;
    }
    printf("The reverce no is %d",sum);
}
