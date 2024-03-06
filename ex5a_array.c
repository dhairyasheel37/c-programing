#include<stdio.h>
int main()
{
	int a[5],i,small,large;
	printf("enter the number \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array element are \n");
	for(i=0;i<5;i++)
	printf("a[%d]=%d\n",i,a[i]);
	small=a[0];
	large=a[0];
	for(i=0;i<5;i++)
	{
		if(small>a[i])
		{
			small=a[i];
		}
		if(large<a[i])
		{
			large=a[i];
		}
	}
	printf("small no is %d",small);
	printf("large no is %d",large);	
}
