#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases
    
    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K); // Input N and K for each test case
        
        if (K >= N) {
            printf("YES\n"); // Chef can enter the fair with all his friends
        } else {
            printf("NO\n"); // Chef cannot enter the fair with all his friends
        }
    }
    return 0;
}
