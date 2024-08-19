#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float x,y,p;
	    scanf("%f %f",&x,&y);
        p = x * (1.07);
        if(y <= p)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
	}

}
