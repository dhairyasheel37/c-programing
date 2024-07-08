#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int rupees,coins ;
	    scanf("%d",&rupees);
	    coins=rupees%10;
	    printf("%d\n",coins);
	}

}
