/* The Gift
Om has X rupees. He wants to gift a laptop worth N rupees to his girlfriend.

We know that Om is the technical secretary of IIIT-A and has access to the Gymkhana funds
of IIIT-A. Currently there are M rupees in the fund and Om can use the fund as much as he wants.

Find whether Om can gift his girlfriend a new laptop. */
#include <stdio.h>

int main(void) {
	// your code go
       int X,N,M,t;
       scanf("%d%d%d",&X,&N,&M);
       t=X+M;
       if(t>=N)
       printf("YES");
       else
       printf("NO");
       
   }
