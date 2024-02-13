#include<stdio.h>
main()
{
	int no,r,s=0;
	printf("Enter the three digit number:\n");
	scanf("%d",&no);//123
	r=no%10;//3
	s=s+r;//3
	no=no/10;//12
	r=no%10;//2
    s=s+r;//5
    no=no/10;//1
    s=s+no;//6
	printf("The sum of 3 digit number is: %d",s);
}
