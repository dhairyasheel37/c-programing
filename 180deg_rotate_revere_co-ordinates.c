#include<stdio.h>
int main()
{
    int px,py;
    int qx,qy,rx,ry;

    printf("enter the p co_ordinates\n");
    scanf("%d%d",&px,&py);

     printf("enter the q co_ordinates\n");
     scanf("%d%d",&qx,&qy);

     rx=(2*qx)-px;
     ry=(2*qy)-py;

     printf("rx=%d ry=%d",rx,ry);
}
