#include<stdio.h>
int main()
{
    int number1,number2,smallnumber;
    printf("Enter the number one and number two : ");
    scanf("%d&%d",&number1,&number2);
    if(number1<number2)
       smallnumber=number1;
    else
        smallnumber=number2;
    int i=1,gcd;
    while(i<=smallnumber)
    {
        if(number1%i==0 && number2%i==0)
            gcd=i;
            i++;
    }
    printf("GCD of %d and %d is %d",number1,number2,gcd);
}
