#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        int a,b,c;
        float g;
        scanf("%d %d %d\n",&a,&b,&c);
        g =(float) (a+b)/2;
        if(c<g)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
