#include<stdio.h>
void main()
{
	
	int a[5],i,j,t;
	printf("enter the number \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array element are \n");
	for(i=0;i<5;i++)
	printf("a[%d]=%d\n",i,a[i]);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if (a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
		printf("Assending order is ");
	for(i=0;i<5;i++)
	{
	
		printf(" %d",a[i]);
	}
}
