#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three number:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(c>a)
        {
            printf("c is largest");
        }
        else
        {
            printf("a is largest");
        }
    }

     else if (b>c)
    {
        if(a>b)
        {
             printf("a is largest");
        }
        else
        {
            printf("b is largest");
        }
    }
    else
    {
        printf("c is greater");
    }

}
