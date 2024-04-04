#include <stdio.h>

int countDigit4(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == 4) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int num;
        scanf("%d", &num);
        int result = countDigit4(num);
        printf("%d\n", result);
    }

    return 0;
}
