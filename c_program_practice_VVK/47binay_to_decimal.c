#include<stdio.h>
#include<math.h>
int main()
{
    int no,sum=0,r,i,t,ch,dr;
    printf("Enter the choice binary to decimal (10) and decimal to binary(2) :");
    scanf("%d",&ch);
    if(ch==10)
    {
        printf("enter the binary no :");
        scanf("%d",&no);
        for(i=0;no>0;i++)
        {
            r=no%10;
            if(r>0)
            {
                t=r*(pow(2,i));
                sum=sum+t;
            }
                no=no/10;
        }
        printf("decimal no :%d",sum);
    }

    else if(ch==2)
    {
        int a[20];
        printf("enter the decimal no :");
        scanf("%d",&no);
        for(i=0;no>0;i++)
        {
            r=no%2;
            no=no/2;
            a[i]=r;
        }
        for(int j=i-1;j >=0;j--)
        {
            printf("binary no :%d",a[j]);
        }

    }

}
