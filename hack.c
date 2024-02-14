#include <stdio.h>
int max_of_four(int a,int b,int c,int d)
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
{
	 int max=0;
	max= (max<=a)?a:max;
	max= (max<=b)?b:max;
	max= (max<=c)?c:max;
	max= (max<=d)?d:max;
	return max;
}


int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

