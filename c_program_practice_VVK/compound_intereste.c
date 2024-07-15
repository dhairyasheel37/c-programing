#include<stdio.h>
int main()
{
     float p,r,t,CI,n;
    printf("enter the principal ,rate, time,no.of times interest respectively : ");
    scanf("%f%f%f%f",&p,&r,&t,&n);
    int size;
    size=n*t;
    float mult=1;
    for(int i=0;i<size;i++)
    {
        mult=mult*(1+r/n);
    }
    CI=p*mult;
    printf("The compound interest is %f",CI-p);
}
