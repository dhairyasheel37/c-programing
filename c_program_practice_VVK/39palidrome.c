#include<stdio.h>
int main()
{
    int no,r,sum;
    int i;
    printf("Enter the number :");
    scanf("%d",&no);
    i=no;
    while(no>0)
    {
        r=no%10;
        sum=sum*10+r;
        no=no/10;
    }
    if(i==sum)
    {
        printf("%d is palindrome",sum);
    }
    else
        printf("%d is not palindrome",sum);
}
