#include<stdio.h>
int main()
{
    int no;
    float b,s,bn,sn,bb,bs,tb,tt,st,stt,sd,rc,profit,tax;

    printf("enter the no of share : ");
    scanf("%d",&no);

    printf("enter the buying and selling share prize \n");
    scanf("%f %f",&b,&s);
    bn=b*no;
    sn=s*no;

    bb=(float)b*(0.03/100);
    bs=(float)s*(0.03/100);
    tb=bb+bs;

    st=tb*(10.36/100);
    stt=(float)sn*(0.002/100);

    tt=bn+sn;
    sd=tt*(0.002/100);
    rc=(float)tt*(0.004/100);

    tax=tb+st+stt+sd+rc;
    profit=sn-bn-tax;

    printf("Profit is: %f",profit);

}
