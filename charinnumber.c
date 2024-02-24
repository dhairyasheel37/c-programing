#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char *s;
    int num,c;
   s=malloc(sizeof(char)*10000);
   scanf("%s",s);
   for(int i=0,c=0;i<=9;i++)
{
    for(int j=0;s[j];j++)
    {
    if(s[j]>=48 && s[j]<=48+9)
    {
        if(s[j]==(48+i))
        {
        c++;
        }
    }
    }
    printf("%d",c);
    c=0;
}
return 0;
}
