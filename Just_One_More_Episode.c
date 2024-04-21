#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int m;
	    scanf("%d",&m);
	    if(m>24)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	      printf("NO\n");   
	    }
	}

}
