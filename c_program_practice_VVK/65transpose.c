#include<stdio.h>
int main()
{
    int a[10][10],i,j,rows,column;
    printf("Enter the row and column :");
    scanf("%d %d",&rows,&column);

    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("matrix a is :\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nafter transpose matrix \n");
    for(j=0;j<column;j++)
    {
         for(i=0;i<rows;i++)

        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
