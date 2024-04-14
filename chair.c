#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Input the number of students and the number of chairs Chef already has
        
        int extra_chairs = X - Y; // Calculate the difference between the number of students and the number of chairs
        
        if (extra_chairs <= 0) {
            printf("0\n"); // If extra_chairs is less than or equal to zero, no extra chairs needed
        } else {
            printf("%d\n", extra_chairs); // Otherwise, output the number of extra chairs needed
        }
    }
    
    return 0;
}
