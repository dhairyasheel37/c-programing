#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
    while(t!=0)
    {
        int x,y,z,tc,ry;
        scanf("%d %d %d",&x,&y,&z);
        tc=x*10;
        if(tc>=y)
        {
            printf("%d\n",y*z);
        }
        else
        {
            printf("%d\n",tc*z);
        }
        
        t--;
    }

}
