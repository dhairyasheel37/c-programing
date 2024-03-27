#include<stdio.h>
int main()
{
    int i,d,y,x,a,z;
    printf("enter the interest,diposit,year");
    scanf("%d%d%d",&i,&d,&y);

    x=(i*d*y)/100;
    a=x+d;
    z=x/y;

    printf("interest per year=%d,F.A=%d",z,a);
}
