#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Your code goes here (if needed)
    
    int c;
    c=a+ b+(a*b);
    if(c==111)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
