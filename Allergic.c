#include <stdio.h>

// Function to check if a number is allergic or not
int isAllergic(int num) {
    while (num > 0) {
        if ((num & 3) == 3) // Checking for consecutive ones
            return 1; // Allergic
        num >>= 1;
    }
    return 0; // Not allergic
}

int main() {
    int T;
    scanf("%d", &T); // Input number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Input for each test case

        if (isAllergic(N))
            printf("ALLERGIC\n");
        else
            printf("NOT_ALLERGIC\n");
    }

    return 0;
}
