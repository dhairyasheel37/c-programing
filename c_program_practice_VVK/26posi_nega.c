#include<stdio.h>

int valid();
int valid(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n>0)
    {
        return 1;
    }
    else
        return 2;

}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int r;
    r=valid(n);
    if(r)
    {
        if(r==1)
            printf("%d is the '+' number",n);
        else
            printf("%d is the '-' number",n);
    }

}
