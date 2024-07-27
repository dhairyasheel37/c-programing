#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5},i,p,insert,temp=0;
    printf("enter the position :");
    scanf("%d",&p);
    printf("Enter the insert element :");
    scanf("%d",&insert);
    for(i=5;i>=p-1;i--)
    {
        a[i]=a[i-1];
    }
    a[p-1]=insert;
    for(i=0;i<6;i++)
    {
        printf(" %d",a[i]);
    }
}
