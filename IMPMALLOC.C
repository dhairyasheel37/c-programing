#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    int *a;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("%d\n",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
