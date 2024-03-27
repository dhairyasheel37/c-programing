#include<stdio.h>

int leap(int);
int leap(int x)
{
	if((x%4==0)&&(x%400)||(x%4==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int y,l;
	scanf("%d",&y);
	l=leap(y);
	if(l)
	printf("l.p.y");
	else
	printf("n.l.p.y");
}
