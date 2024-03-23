#include <stdio.h>

int main() {
    int T,total=0,A,B,C;
    scanf("%d", &T);
    while (T--) {
        int A, B, C, N;
        scanf("%d %d %d %d", &A, &B, &C, &N);
        A = N - A;
         B = N - B;
         C = N - C;


        if (A < 0)
            A = 0;
        if ( B < 0)
         B = 0;
        if (C < 0)
        C = 0;

        // Calculate the total cost
         total = A * 5 + B * 10 + C * 15;

        printf("%d\n",total);
    }

    return 0;
}
