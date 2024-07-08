#include <stdio.h>

int main(void) {
	// your code goes here
	/* Spice Level
Each item in Chef’s menu is assigned a spice level from 
1
1 to 
10
10. Based on the spice level, the item is categorised as:

MILD: If the spice level is less than 
4
4.
MEDIUM: If the spice level is greater than equal to 
4
4 but less than 
7
7.
HOT: If the spice level is greater than equal to 
7
7.
Given that the spice level of an item is 
𝑋
X, find the category it lies in.  */


  int t;
  scanf("%d",&t);
  
  while(t--)
  {
      int spice;
      scanf("%d",&spice);
      
      if(spice<4)
      printf("MILD\n");
      
      else if(spice>=4 && spice <7  )
      printf("MEDIUM\n");
      
      else if(spice>=7)
      printf("HOT\n");
      
      else
      printf(" spice level are not 1 to 10");
  }

}
