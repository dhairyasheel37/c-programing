#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    
	     if (a >= 2 * b) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
	}
	
}
