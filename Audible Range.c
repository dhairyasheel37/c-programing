#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);

        if (X >= 67 && X <= 45000) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
