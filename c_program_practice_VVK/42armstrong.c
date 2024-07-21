#include<stdio.h>
void main()
{
	int i,r,num,temp,sum,n1,n2;
	printf("Enter the two internal :");
	scanf("%d%d",&n1,&n2);
	for (i=n1;i<=n2;i++)
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
