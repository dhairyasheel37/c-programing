#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int following,follower;
	    scanf("%d %d",&following,&follower);
	    if(following>10*follower)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	
	    }
	}

}
