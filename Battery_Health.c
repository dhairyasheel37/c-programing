#include <stdio.h>

int main() {
    int T, X;
    
    // Input the number of test cases
    scanf("%d", &T);
    
    // Loop through each test case
    for (int i = 0; i < T; i++) {
        // Input the battery health
        scanf("%d", &X);
        
        // Check if battery health is 80% or above
        if (X >= 80) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
