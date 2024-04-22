#include <stdio.h>

int main() {
    int T, X;
    
    // Input the number of test cases
    scanf("%d", &T);
    
    // Iterate through each test case
    for (int i = 0; i < T; i++) {
        // Input the rate of rainfall
        scanf("%d", &X);
        
        // Check the category of rainfall and print accordingly
        if (X < 3) {
            printf("LIGHT\n");
        } else if (X >= 3 && X < 7) {
            printf("MODERATE\n");
        } else {
            printf("HEAVY\n");
        }
    }
    
    return 0;
}
