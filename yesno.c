#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases

    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C); // Input A, B, and C for each test case

        // Check if the sum of A and B equals C
        if (A + B == C)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
