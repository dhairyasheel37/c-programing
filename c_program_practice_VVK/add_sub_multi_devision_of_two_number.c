#include<stdio.h>
int main()
{
    int number1,number2;
    char ch;

    printf("Enter the two number : ");
    scanf("%d%d",&number1,&number2);

    printf("Addition is %d.\n",number1+number2);

    printf("Substraction is %d.\n",number1-number2);

    printf("Multiplication is %d.\n",number1*number2);

    printf("Divition is %f.\n",(float) number1/number2);
}
