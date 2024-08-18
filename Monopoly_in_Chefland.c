#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int R1, R2, R3;
        scanf("%d %d %d", &R1, &R2, &R3); // Read the revenues of the three companies

        // Check if any company has a monopolistic advantage
        if (R1 > R2 + R3 || R2 > R1 + R3 || R3 > R1 + R2) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
