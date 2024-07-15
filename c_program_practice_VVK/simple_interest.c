#include<stdio.h>
int main()
{
    float p,r,t,SI;
    printf("enter the principal ,rate, time respectively : ");
    scanf("%f%f%f",&p,&r,&t);
    SI=(p*r*t)/100;
    printf("Simple interest is %f",SI);

}
