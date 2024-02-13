#include<stdio.h>
int main()
{
	int a,b,x;
	float c;
	printf("Enter the value of a and b \n");
	scanf("%d %d",&a,&b);
	//Arithamatic operation
	c=a+b;
	printf("The addition is: %f \n",c);
	
	c=a-b;
	printf("The substraction is: %f \n",c);
	
	c=a*b;
	printf("The multiplication is: %f \n",c);
	
	c=(float)a/b;
	printf("The divistion is: %f \n",c);
	
	//Logical operation
	x=a&&b;
	printf("The AND operator is: %d \n",x);
	
	x=!a;
	printf("The NOT operator is:%d \n",x);
	
	x=a||b;
	printf("The OR operator is:%d \n",x);
}
