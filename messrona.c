#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d,m,r;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	m=(a*2)+b;
	r=(c*2)+d;
	if(m==r)
	{
	    printf("Equal");
	}
	else if(m>r)
		{
	    printf("Messi");
	}
	else
	{
	    printf("Ronaldo");
	}
}
