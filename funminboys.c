#include <stdio.h>

int minBoysLeft(int G, int B) {
    return B - G ;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int G, B;
        scanf("%d %d", &G, &B);

        int minBoys = minBoysLeft(G, B);
        printf("%d\n", minBoys);
    }

    return 0;
}
