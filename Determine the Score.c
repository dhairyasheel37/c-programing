#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, N;
        scanf("%d %d", &X, &N);

        // Calculating the points scored by Chef
        int points_per_test_case = X / 10;
        int score = points_per_test_case * N;

        printf("%d\n", score);
    }

    return 0;
}
