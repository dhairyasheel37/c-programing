#include<stdio.h>
int main()
{
    int base,exponent,power=1,i;
    printf("Enter the base :");
    scanf("%d",&base);
    printf("Enter the exponent :");
    scanf("%d",&exponent);
    for(i=0;i<exponent;i++)
    {
        power = power * base;
    }
    printf("%d",power);
}
