#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y, Z; // Number of courses, units, and chapters
        scanf("%d %d %d", &X, &Y, &Z);

        // Calculate total number of chapters
        int total_chapters = X * Y * Z;

        // Output the result
        printf("%d\n", total_chapters);
    }

    return 0;
}
