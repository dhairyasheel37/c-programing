#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases
    
    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C); // Input the bids
        
        if (A > B && A > C) {
            printf("Alice\n");
        } else if (B > A && B > C) {
            printf("Bob\n");
        } else {
            printf("Charlie\n");
        }
    }
    
    return 0;
}
