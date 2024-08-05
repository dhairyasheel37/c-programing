#include<stdio.h>
void booble(int *x,int *y)
{
    int pass,i;

            if(*x>*y)
            {
                int t=0;
                t=*x;
                *x=*y;
                *y=t;
            }

}
int main()
{
    int a[10],i,n,pass;
    printf("Enter the size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     for(pass=0;pass<n-1;pass++)
    {
        for(i=0;i<n-pass-1;i++)
        {
            booble(&a[i],&a[i+1]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
