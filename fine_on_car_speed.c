#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a;
	    scanf("%d",&a);
	    
	    if(a<=70)
	    printf("0\n");
	    
	    else if(a>70 && a<=100)
	    printf("500\n");
	    
	    else
	    printf("2000\n");  
	}

}
