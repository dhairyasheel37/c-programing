#include<stdio.h>
int main()
{
    int i,no1,no2;
    printf("Enter the number :");
    scanf("%d%d",&no1,&no2);
    for(int j=no1;j<no2;j++)
    {
        for(i=2;i<j;i++)
    {
        if(j%i==0)
        {

            break ;
        }

    }
    if(i==j)
    {
        printf("The number prime is %d",i);
    }

    }

}
