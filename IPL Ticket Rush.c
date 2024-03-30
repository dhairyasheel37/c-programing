#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d=0;
	    scanf("%d %d",&a,&b);
	    c=a-b;
	    if(c>0)
	    printf("%d\n",c);
	    else
	    printf("%d\n",d);
	}

}
