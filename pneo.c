#include<stdio.h>
void main()
{
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	if(no>0)
	{
		printf("Number is positive\n");
		if(no%2==0)
		{
			printf("Number is even \n");
		}
		else
		{
			printf("Number is odd \n");	
		}
	}
	else
	{
		printf("Negative number\n");
		if(no%2==0)
		{
			printf("Number is even\n");
		}
		else
		{
			printf("Number is odd");
		}
	}
}
