#include<stdio.h>
int main()
{
    int a[20],i,n,even[10],odd[10],j=0,k=0;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[j]=a[i];
            j++;
        }
        else
        {
            odd[k]=a[i];
            k++;
        }
    }
    printf("\nEven numbers are :");
    for(i=0;i<j;i++)
    {
        printf(" %d",even[i]);
    }

    printf("\nOdd numbers are :");
    for(i=0;i<k;i++)
    {
        printf(" %d",odd[i]);
    }
}
