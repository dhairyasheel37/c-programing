#include<stdio.h>
int main()
{
    float radius,pi=3.14,a;
    printf("enter the radius :");
    scanf("%f",&radius);
    a=pi*radius*radius;
    printf(" Area is :%f\n",a);
    printf("Circumference is :%f",2*pi*radius);

}
