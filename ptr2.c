#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int a, b;
        int *ptr_a, *ptr_b;

        ptr_a = &a;
        ptr_b = &b;

        scanf("%d %d", ptr_a, ptr_b);
        printf("%d\n", *ptr_a + *ptr_b);

        // Your code for each test case goes here 
    }
    return 0;
}
