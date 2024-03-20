#include<stdio.h>
int main()
{
	int n,i;//enter the  no of fibonacci numbers
	printf("enter the value of n");
	scanf("%d",&n);

	int a=0,b=1;
	printf("%d ,%d",a,b);

	int next;
	for(i=1;i<=n;i++)
	{
		next=a+b;
		printf(" , %d",next);

		a=b;
		b=next;


	}
return 0;
}


