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
/* There are only 
2
2 type of denominations in Chefland:

Coins worth 
1
1 rupee each
Notes worth 
10
10 rupees each
Chef wants to pay his friend exactly 
𝑋
X rupees. What is the minimum number of coins Chef needs to pay exactly 
𝑋
X rupees?*/

}
