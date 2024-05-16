#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Input the number of days and the number of tablets Chef already has
        if (X * 3 <= Y) { // Check if Chef has enough tablets for X days
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
