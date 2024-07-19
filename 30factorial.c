#include<stdio.h>
int main()
{
    int  i,no;
    int fact=1;
    printf("Enter the number :");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {

        fact =fact*i;
    }
    printf("Facterial is %d",fact);
}
