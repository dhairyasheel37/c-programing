#include<stdio.h>
#include<string.h>

int main()
{
    char number[20],temp_num[20];
    int r;

    printf("enter the number :");
    gets(temp_num);

    r=validnumber(temp_num);
    if(r==10)
    {
        strcpy(number,temp_num);
    }
    else
    {
        printf("number invalid!");
    }
    printf("%s",number);
}

int validnumber(char tempnum[])
{
    int i;
    for(i=0;tempnum[i]!='\0' ;i++)
    {
        if(!(tempnum[i]>='0' && tempnum[i] <='9'))
        return 0;
    }
    return i;
}
