#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); 

        if (X > Y) {
            printf("YES\n"); 
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
