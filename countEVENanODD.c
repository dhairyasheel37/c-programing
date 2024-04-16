#include<stdio.h>
int main()
{
    int A[20],i,n;
     printf("Enter the size of the array: ");
     scanf("%d",&n);

      printf("Enter the array \n");
      for(i=0;i<n;i++)
      {
          scanf("%d",&A[i]);
      }

      int evenCount = 0, oddCount = 0;
      printf("Even numbers are ");
      for(i=0;i<n;i++)
      {
          if(A[i]%2==0)
          {
              printf("%d ",A[i]);
              evenCount++;
          }
      }
      printf("\n");

      printf("Odd numbers are ");
      for(i=0;i<n;i++)
      {
          if(A[i]%2!=0)
          {
              printf("%d ",A[i]);
              oddCount++;
          }
      }
      printf("\n");

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

}
