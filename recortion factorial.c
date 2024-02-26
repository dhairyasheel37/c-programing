#include<stdio.h>
int fact(int );
int fact(int n)
{
	int f=1;
	if (n==0||n==1)
	{
		return 1;
	}
	else
	{
		f=n*fact(n-1);
	}
	return f;
}
void main()
{
	int no,z;
	printf("number :");
	scanf("%d",&no);
	z=fact(no);
	printf("factorial is:%d",z);
}
