#include <stdio.h>
int main()
{
  int a[5],i;
  printf("enter the element\n");
  for(i=0;i<5;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("the array is \n");
  for (i=0;i<5;i++)
  {
      printf("a[%d]=%d\n",i,a[i]);
  }
}
