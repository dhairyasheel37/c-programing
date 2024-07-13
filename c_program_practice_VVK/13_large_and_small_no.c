#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter the two number :");
    scanf("%d%d",&number1,&number2);
    if(number1>number2)
    {
        printf("%d is large number",number1);
    }
    else
    {
        printf("%d is small number",number2);
    }
}
