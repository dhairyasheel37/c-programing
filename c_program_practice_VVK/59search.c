#include<stdio.h>
int main()
{
    int a[20],i,n,search;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the searching element :");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("%d Searching element in array is present in %d position of array\n",a[i],i+1);
        }
    }
}
