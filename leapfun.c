#include<stdio.h>

int leap(int);
int leap(int x)
{
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    y=leap(y);
    if(y)
        printf("This is leap year");
    else
        printf("This is not leap year");
}
