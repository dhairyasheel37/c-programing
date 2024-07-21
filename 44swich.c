#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("Enter the your choice: add=1,sub=2,multiplication=3,division=4.\n");
	scanf("%c",&ch);
	printf("Enter the number\n");
	scanf("%d %d",&a,&b);

	switch(ch)
	{
		case '+':
			c=a+b;
			printf("Addition is: %d",c);
			break;

		case '-':
		    c=a-b;
			printf("Subtraction is: %d",c);
			 break;

		case '*':
		    c=a*b;
		    printf("Multiplication is: %d",c);
		    break;

		case '/':
		    c=a/b;
		    printf("Divition is: %d",c);
		    break;

		default:
			printf("Please enter the correct choice");
	}
}

