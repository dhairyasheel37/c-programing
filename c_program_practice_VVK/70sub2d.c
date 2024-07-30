#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[20][20],i,j,rows,column;
    printf("Enter the row and column :");
    scanf("%d %d",&rows,&column);
    printf("enter matrix a is :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter matrix b is :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }

    printf(" matrix a is :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",a[i][j]);
        }
       printf("\n");
    }

     printf(" matrix b is :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",b[i][j]);
        }
       printf("\n");
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("substraction of two matrix is :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",c[i][j]);
        }
       printf("\n");
    }

}
