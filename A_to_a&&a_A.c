#include<stdio.h>
int main()
{
    int i;
    char s[10];
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        else
        {
            s[i]=s[i]-32;
        }
    }
   printf("%s",s);
}
