#include<stdio.h>
int main()
{

    int number1,number2 ,temp;
    printf("Enter the two number  ");
    scanf("%d %d",&number1,&number2);
    temp = number2;
    number2=number1;

    number1=temp;

    printf("after swapping %d %d",number1,number2);

}
