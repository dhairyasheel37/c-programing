#include<stdio.h>
#include<string.h>
int validate();
int main()

{
    char name[20],tempname[20];
    int r;

    printf("enter the name :");
    scanf("%s",&tempname);

    r=validate(tempname);
    if(r==1)
    {
        strcpy(name,tempname);
    }
    printf("%s",name);


}
int validate(char temp[20])
{
    int i;
    for(i=0;temp[i]!='\0';i++)
    {
        if(temp[i]>='0' && temp[i]<='9')
        {
            return 0;
        }
    }
    return 1;
}
