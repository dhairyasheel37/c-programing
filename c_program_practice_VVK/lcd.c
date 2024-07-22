#include<stdio.h>
int main()
{
	int n1,n2,temp,i,lcd;
	printf("Enter the number ");
	scanf("%d %d",&n1,&n2);

	for(i=2;i<=n1 && i<=n2 ;++i)
    {
        if(n1%i==0 && n2%i==0)
        {
            lcd=i;
            break ;
        }

    }
    printf("lcd is  %d",lcd);
}
