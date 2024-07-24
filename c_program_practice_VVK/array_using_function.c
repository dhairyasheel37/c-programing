#include<stdio.h>

int main()
{
    int a[5]={1,2,3};
    int fun();
    int r;
    fun(a);
    for(int i=0;i<3;i++)
    {
        printf("%d",a[i]);
    }

}
int fun(int x[])
{
    for(int i=0;i<3;i++)
    {
        if(x[i]==2)
        {
            x[i]=0;
        }
    }

}
