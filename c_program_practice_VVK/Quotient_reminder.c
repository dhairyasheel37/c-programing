#include<stdio.h>
int main()
{

    int Quotient,Remainder,number ,d;
    printf("Enter the dividend and divider : ");
    scanf("%d %d",&number,&d);

    Quotient = number/d;
    Remainder = number%d;

    printf("Quotient is %d and Remainder is %d",Quotient,Remainder);
}
