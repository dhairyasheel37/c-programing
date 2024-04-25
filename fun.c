#include <stdio.h>

int read(int,int,int);
int read(int a,int b,int c)
{
    int l=b*c;
    if(a<=l)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	     int x,y,z,f;
          scanf("%d %d %d",&x,&y,&z);
         f=read(x,y,z);
         if(f)
        {
           printf("YES\n");
        }
    else
        {
           printf("NO\n");
        }
	}
}
