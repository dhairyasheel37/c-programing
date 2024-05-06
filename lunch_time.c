#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int a;
	    scanf("%d",&a);
	    
	    if(a<=4 && a>=1)
	    {
	        printf("YES\n");
	    }
	    
	    else
	    {
	        printf("NO\n");
	    }
	}
