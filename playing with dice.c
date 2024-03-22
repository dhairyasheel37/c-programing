#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x, y;


        scanf("%d %d", &x, &y);
        // Your code for each test case goes here
        if((x+y)>6)
            printf("YES\n");
        else
            printf("NO\n");

    }
}
