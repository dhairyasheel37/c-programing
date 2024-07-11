#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);  

        if (X < Y) {
            printf("FIRST\n");
        } else if (Y < X) {
            printf("SECOND\n");
        } else {
            printf("ANY\n");
        }
    }

    return 0;
}
