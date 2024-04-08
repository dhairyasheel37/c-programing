#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,total;
	    scanf("%d %d",&x,&y);
	    total=x*10+y*90;
	    printf("%d\n",total);
	}

}

