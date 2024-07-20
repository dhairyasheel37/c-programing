#include<stdio.h>
int main()
{
    int c;
    printf("Enter the Alphabet :");
    scanf("%c",&c);
    if((c >=65 && c<=99 )&& (c >=90 && c<=122 ))
    {
        printf("%c has alphabet\n",c);
    }
    else
        printf("%c has not alphabet\n",c);
}
