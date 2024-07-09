#include<stdio.h>
int main()
{
    int i;
    long int l;
    float f;
    double d;
    char c[20];
    printf("enter the number : ");
    scanf("%d",&i);
    printf("The int is %d.\n",i);

    printf("enter the long number : ");
    scanf("%ld",&l);
    printf("The long int is %d.\n",l);

    printf("enter the decimal number : ");
    scanf("%f",&f);
    printf("The float is %f.\n",f);

    printf("enter the long decimal number : ");
    scanf("%lf",&d);
    printf("The double is %lf.\n",d);

    printf("enter the word : ");
    scanf("%s",&c);
    printf("The long int is %s.",c);

}
