#include<stdio.h>
int main()
{
    int a[20],i,n,sum=0,t;
    float p;
    for(i=0;i<5;i++)
    {
        printf("%d subject marks out of 100 :",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }

    printf("Total marks is %d\n",sum);
    p=(float)sum/5;
    printf("The percentage is %0.2f",p);
}
