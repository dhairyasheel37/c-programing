#include<stdio.h>
int main()
{
	int a,b,y;
	printf("Enter the number: ");
	scanf("%d %d",&a,&b);
	y=(a>b)?a:b;
	printf("Largest number is: %d",y);
}
