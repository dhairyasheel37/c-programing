#include<stdio.h>
int main()
{
    int no,r;
     int i=0;
    printf("Enter the number :");
    scanf("%d",&no);
    while(no>0)
    {

        r=no%10;
        no=no/10;
        i++;
    }
    printf("The Count Number of Digits is %d",i);
}
