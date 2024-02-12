/* Swapping without using third variable */
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two no \n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("New value of a is:%d and b is %d",a,b);
	return 0;
}
