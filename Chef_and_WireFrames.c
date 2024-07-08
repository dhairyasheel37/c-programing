#include <stdio.h>

int main(void) {
	// your code goes here
	int t,N,M,X,tr;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&N);
	    scanf("%d",&M);
	    scanf("%d",&X);
	    tr=X*(N*2+M*2);
	    printf("%d\n",tr);
	}

}
