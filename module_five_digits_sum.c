#include<stdio.h>
int main()
{
    int  num,sum=0,temp;
    printf("Enter the number");
    scanf("%d",&num);//12345

    temp=num%10;
    sum=sum+temp;
    num=num/10;

     temp=num%10;
    sum=sum+temp;
    num=num/10;

     temp=num%10;
    sum=sum+temp;
    num=num/10;

     temp=num%10;
    sum=sum+temp;
    num=num/10;

     temp=num%10;
    sum=sum+temp;


    printf("%d",sum);
}
