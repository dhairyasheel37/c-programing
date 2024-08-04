

#include<stdio.h>
int main()
{
    int i,j,r=3,c=3,a[10][10],rdsum=0,dsum=0,rsum=0,isum1=0,isum2=0,csum=0,csum1=0,csum2=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if((i+j)==2)
            {
                rdsum=rdsum+a[i][j];
            }
            if(i==j)
            {
                dsum=dsum + a[i][j];
            }
            if(i==0)
            {
                rsum=rsum+a[i][j];
            }
            if(i==1)
            {
                isum1=isum1+a[i][j];
            }
            if(i==2)
            {
                isum2=isum2+a[i][j];
            }
            if(j==0)
            {
                csum=csum+a[i][j];
            }
            if(j==1)
            {
               csum1 = csum1 + a[i][j];
            }

            if(j==2)
            {
                csum2 = csum2 + a[i][j];
            }

        }
    }

     if(rdsum == dsum && dsum == rsum)
     {
         if(rsum == isum1 && isum1 == isum2)
         {
             if(isum2 == csum && csum == csum1)
             {
                 if(csum1 == csum2 )
                 {
                     printf("yes it is magic square");
                 }
             }
         }
     }
     else
        printf("no it is magic square");
}
