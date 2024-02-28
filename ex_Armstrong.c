#include<stdio.h>
void main()
{
	int i,r,num,temp,sum;
	for (i=1;i<=500;i++)
	{
		num =i;
		temp =i;
		sum =0;
		while (num>0)
		{
			r=num%10;
			sum=sum+r*r*r;
			num=num/10;
		}
		if (sum == temp)
		{
			printf("Armstrong number:%d\n",sum);
		}
	}
}
