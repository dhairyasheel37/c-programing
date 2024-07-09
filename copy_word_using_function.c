#include<stdio.h>
#include<string.h>
int main()
{
    int r;
    char name[20],temp_name[20];
    printf("enter the name : ");
    scanf("%s",&temp_name);

    r=valid(temp_name);

    if(r==1)
    {
        strcpy(name,temp_name);
        printf(" string is %s",name);
    }
    else
        printf("Invalid number");
}
 int valid(char temp_name[])
 {
     int i;
     for(i=0;i!='\0';i++)
     {
         if(temp_name[i]>='0' && temp_name<='9')
         {
             return 0;
         }
     }
     return 1;
 }

