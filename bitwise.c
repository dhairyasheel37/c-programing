#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OR_RESULT  (a | b)
#define AND_RESULT (a & b)
#define XOR_RESULT (a ^ b)


void calculate_the_maximum(int n, int k)
 {
    int maxOR = 0, maxAND = 0, maxXOR = 0;

    for (int a = 1; a < n; ++a)
    {
        for (int b = a + 1; b <= n; ++b)
        {
            if (XOR_RESULT > maxXOR && XOR_RESULT < k)  maxXOR = a ^ b;
            if (AND_RESULT > maxAND && AND_RESULT < k)  maxAND = a & b;
            if (OR_RESULT  > maxOR  && OR_RESULT  < k)  maxOR  = a | b;
        }
    }
    printf("%d\n%d\n%d\n", maxAND, maxOR, maxXOR);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}


