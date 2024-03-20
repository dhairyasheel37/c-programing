#include<stdio.h>
void main()
{
	int matrix[20][20],i,j,r,c;
	printf("enter the size of rows\n");
	scanf("%d",&r);
	printf("enter the size of columns\n");
	scanf("%d",&c);
	
	printf("Before transpose matrix \nenter the element in matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf(" %d",matrix[i][j]);
		}
		printf("\n");
	}
	printf("After transpose\n");
	
	for(i=0;i<c;i++)
	{
	for(j=0;j<r;j++)
    	{
    		printf(" %d",matrix[j][i]);
		}
			printf("\n");	
	}
}
