#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &X);

        int cost;
        if (X >= 300)
            cost = X * 10;
        else
            cost = 300 * 10;

        printf("%d\n", cost);
    }

    return 0;
}
