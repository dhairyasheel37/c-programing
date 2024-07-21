#include<stdio.h>
void main()
{
	int i,r,num,temp,sum;
	printf("Enter the number :");
	scanf("%d",&i);

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
		else
            printf(" Not Armstrong number:%d\n",i);
}
