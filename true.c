#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N, K; 
        scanf("%d %d", &N, &K);

       
        int BobScore = N - K;

        
        printf("%d\n", BobScore);
    }

    return 0;
}
