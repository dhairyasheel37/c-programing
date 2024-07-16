#include<stdio.h>
#include<string.h>
int validname();
int validadd();
int validphone();
int main()

{
    char name[20],tempname[20],address[30],tempddress[30],city[20],tempcity[20],number[11],tempnumber[11];
    int r,a,c,n;

    printf("Enter the name :");
    gets(tempname);

    printf("Enter the address :");
    gets(tempddress);

    printf("Enter the city :");
    gets(tempcity);

    printf("enter the phone no :");
    gets(tempnumber);

    r=validname(tempname);
    if(r==1)
    {
        strcpy(name,tempname);
    }
    else
        printf("Name is invalid");



    a=validadd(tempddress);
        if(a==1)
    {
        strcpy(address,tempddress);
    }
    else
        printf("Address is invalid");



    c=validname(tempcity);
    if(c==1)
    {
        strcpy(city,tempcity);
    }
    else
        printf("City name is invalid");


    n=validphone(tempnumber);
    if(n==10)
    {
        strcpy(number,tempnumber);
    }
    else
        printf("Phone number is invalid");

    printf("  %s ",name);
    printf("%s ",address);
    printf("%s ",city);
    printf("%s ",number);
}

int validname(char temp[20])
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

int validadd(char add[20])
{
           int i;
    for(i=0;add[i]!='\0';i++)
    {
          return 1;
    }

}

int validphone(char tempnum[])
{
       int i;
    for(i=0;tempnum[i]!='\0' ;i++)
    {
        if(!(tempnum[i]>='0' && tempnum[i] <='9'))
        return 0;
    }
    return i;
}
