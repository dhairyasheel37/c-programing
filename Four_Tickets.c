#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,m;
        scanf("%d",&a);
        
        if(4*a<=1000)
        printf("YES\n");
        else
        printf("NO\n");
    }
}

