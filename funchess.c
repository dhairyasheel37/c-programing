#include <stdio.h>

int chess_time(int);
int chess_time(int x)
{
    int y;
    y=(x*60)/20;
    return y;
}

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int a,b;
	    scanf("%d",&a);
	    b= chess_time(a);
	    printf("%d\n",b);
	}

}
