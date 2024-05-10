#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X, K;
        scanf("%d %d %d", &N, &X, &K); 

        int total_cost = N * X; 

        if (total_cost <= K) {
            printf("YES\n"); 
        } else {
            printf("NO\n"); 
        }
    }

    return 0;
}
