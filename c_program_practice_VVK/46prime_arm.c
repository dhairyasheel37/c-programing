#include<stdio.h>
int prime(int);
int arm(int);
int main()
{
    int s,r,no;
    printf("enter the choice armstrong then enter 1 or prime then enter 2:");
    scanf("%d",&s);

    printf("enter the number :");
    scanf("%d",&no);



    if(s==1)
    {
        r=arm(no);
        if(r==1)
        printf("It is armstrong \n");
        else
            printf("It not armstrong number\n");
    }
    else if(s==2)
    {
        r=prime(no);
        if(r==1)
        printf("It is prime \n");
        else
            printf("It is not prime number\n");
    }
    else
        printf("Wrong choice enter\n");
}

int prime(int no)
{
    int i=2,r;
    while(i<no)
    {
        if(no%i==0)
            return 0;

            i++;
    }
    if(i==no)
        return 1;
}


int arm(int no1)
{
    int x,r,sum=0;
    x=no1;
    while(x>0)
    {

        r=x%10;
        sum=sum+r*r*r;
        x=x/10;
    }
    if((no1==sum))
    {
        return 1;
    }
    else
        return 0;
}
