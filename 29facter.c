#include<stdio.h>
int main()
{
    int no,i;
    printf("Enter the number :");
    scanf("%d",&no);
    for(i=2;i<no;i++)
    {
        if(no%i==0 )
        {
            printf("Facter is %d\n",i);
        }
    }
}
