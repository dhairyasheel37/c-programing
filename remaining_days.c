#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases

    while (T--) {
        int K, X;
        scanf("%d %d", &K, &X); // Input K and X for each test case

        int remaining_days = 7 * K - X; // Calculate remaining days
        printf("%d\n", remaining_days);
    }
    return 0;
}
