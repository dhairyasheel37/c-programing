#include <stdio.h>

int main(void) {
	// your code goes here
   int numerator, denominator;
   scanf("%d%d",&numerator,&denominator);
   
   if(numerator>denominator)
   {
       printf("%d",numerator);
   }
   else if (numerator<denominator)
   {
       printf("%d",denominator);
   }
}
