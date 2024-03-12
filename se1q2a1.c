#include<stdio.h>
int main()
{
	int a=5,b=9,c=6,e,x,y;
	float z,g;
	e=(a>b)&&(a<c);
	x=++a;
	y=a--;
	z=b%c;
	g=a/c;
	c=b||(a=9);
	
	printf("the value are %d %d%d\n",x,y,c);
	printf("the value are %f\n%f\n%d",z,g,e);
}
