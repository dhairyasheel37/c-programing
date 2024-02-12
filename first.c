/* Swapping using third variable */
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two no");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("New value of a is:%d and b is %d",a,b);
	return 0;
}
