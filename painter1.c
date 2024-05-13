#include <stdio.h>

int main() {
    int x, y;
    int *ptr_x, *ptr_y;
    
    ptr_x = &x;
    ptr_y = &y;
    
    printf("Enter two integers: ");
    scanf("%d %d", ptr_x, ptr_y);
    
    if (*ptr_x < *ptr_y)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
