#include<stdio.h>
int main()
{
    float km,m,cm,ft,inch;
    printf("Enter the number \n");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("Distance in meter = %f\n",m);
    printf("Distance in cm = %f\n",cm);
    printf("Distance in inch = %f\n",inch);
    printf("Distance in foot = %f\n",ft);
    return 0;

}
