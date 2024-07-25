#include<stdio.h>
void main()
{
	int i,r,num,temp,sum=0;
	printf("Enter the number :");
	scanf("%d",&num);

		temp =num;
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
