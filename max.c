#include<stdio.h>
int main()
{
    int a[5],i,max;
    printf("enter the element");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
   max=a[0];
   for (i=0;i<5;i++)
   {
       if(a[i]>max)
       {
           max=a[i];
       }
       else
       {
           max=max;
       }
   }
   printf("maximum no is %d",max);
}
