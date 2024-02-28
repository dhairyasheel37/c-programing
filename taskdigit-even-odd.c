#include<stdio.h>
int main()
{
	int count=0,n,r,s=0;
	scanf("%d",&n);
	
	while(n>0)
	{
		r= n%10;
		s=s+r;
		n=n / 10;
	}
	
	if(s%2==0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
