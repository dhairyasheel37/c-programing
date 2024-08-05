#include<stdio.h>
void booble(int n,int *a)
{
    int pass,i;
    for(pass=0;pass<n-1;pass++)
    {
        for(i=0;i<n-pass-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int t=0;
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
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
    booble(n,a);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
