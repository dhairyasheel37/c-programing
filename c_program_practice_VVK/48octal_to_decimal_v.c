
#include<stdio.h>
#include<math.h>
int main()
{
    int no,sum=0,r,i,t,ch,dr;
    printf("Enter the choice octal to decimal (10) and decimal to octal(8) :");
    scanf("%d",&ch);
    if(ch==10)
    {
        printf("enter the octal no :");
        scanf("%d",&no);
        for(i=0;no>0;i++)
        {
            r=no%10;
            if(r>0)
            {
                t=r*(pow(8,i));
                sum=sum+t;
            }
                no=no/10;
        }
        printf("decimal no :%d",sum);
    }

    else if(ch==8)
    {
        int a[20];
        printf("enter the decimal no :");
        scanf("%d",&no);
        for(i=0;no>0;i++)
        {
            r=no%8;
            no=no/8;
            a[i]=r;
        }
        printf("octal no :");
        for(int j=i-1;j >=0;j--)
        {
            printf("%d",a[j]);
        }

    }

}
