#include<stdio.h>
int main()
{
    int j=1;
    while(j <= 255)
    {
        printf("%c %d\n", j, j);
        j++;
    }
    return 0;
}
/* output is like that
! 33
" 34
# 35
$ 36
% 37
& 38
' 39
( 40
) 41
* 42
+ 43 */
