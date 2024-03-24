#include <stdio.h>

int main(void) {
	// your code goes here
     int t;
     scanf("%d",&t);
     while(t--)
     {
         int w,c;//w= weeks,c=coins
         scanf("%d %d",&w,&c);
         printf("%d\n",w*c);
     }
}
