#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int num,i,r,sum=0,a[10];
	    scanf("%d",&num);

	    for(i=0;num>0;i++)
	    {
	       r=num%10;
	       a[i]=r;
	       num=num/10;
	    }
	    sum=a[0]+a[i-1];
	    printf("%d\n",sum);

	}
}
