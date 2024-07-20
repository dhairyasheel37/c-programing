#include<stdio.h>
int main()
{
    int no,i,size;
    printf("Enter the number of table which you want :");
    scanf("%d",&no);
    printf("Enter the size :");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
        printf("%d * %d = %d\n",no,i,no*i);
    }
}
