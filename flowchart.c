#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		printf("a=%d small",a);
	}
	if(b<c)
	{
	    if(b<a)
		printf("b=%d small",b);
	}
	if(c<a)
	{
		if(c<b)
		printf("c=%d small",c);
	}
}
