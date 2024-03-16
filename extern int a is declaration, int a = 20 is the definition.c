#include<stdio.h>
int main()
{
    extern int a;
    printf("%d\n", a);
    return 0;
}
int a=20;
//the output of this program is 20
//extern int a is declaration, int a = 20 is the definition
//int a=20; is outside of thats don'ts matter.
