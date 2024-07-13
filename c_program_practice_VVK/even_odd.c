#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    if(number>0)
    {
        printf("\"+\"");
    }
    else
    {
        printf("\"-\"");
    }
}
