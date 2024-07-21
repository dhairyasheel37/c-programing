#include<stdio.h>
int main()
{
    int i=2,no;
    printf("Enter the number :");
    scanf("%d",&no);
    while(i<no)
    {
        if(no%i==0)
        {
            printf("no is composite");
            break ;
        }
        i++;
    }
    if(i==no)
    {
        printf("The no is prime");
    }
}

