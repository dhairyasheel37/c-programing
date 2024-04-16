#include<stdio.h>
int main()
{
     int n,i,r,reversenumber=0;
     printf("Enter the number: ");
     scanf("%d",&n);
     for(;n!=0;n=n/10)
     {
        r= n%10;
        reversenumber=reversenumber*10+r;
     }
       printf("Reversed number: %d\n", reversenumber);
}
