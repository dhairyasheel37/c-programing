#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    // Loop through each test case
    for (int i = 0; i < T; i++) {
        int X, Y; // Current number of seats and number of interested students
        scanf("%d %d", &X, &Y);
        
        // Calculate the extra seats needed
        int extra_seats = (Y > X) ? (Y - X) : 0;
        
        // Output the result
        printf("%d\n", extra_seats);
    }
    
    return 0;
}
