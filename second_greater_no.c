#include <stdio.h>

int sthree(int a,int b,int c)
{
    if ((a>=b && a<=c)||(a>=c && a<=b))
    return a;
    else if (( b>=a && b<=c )||( b>=c && b<=a ))
    return b;
    else
    return c;
}

int main(void) {
	// your code goes here
    int N,i;
    printf("Enter the test cases:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        int a,b,c;
        printf("enter the three number\n");
        scanf("%d %d %d",&a,&b,&c);
    int s = sthree(a,b,c);
     printf("Second Max Number is %d.\n",s);
    }
}

