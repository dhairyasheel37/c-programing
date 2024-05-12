#include <stdio.h>

// Function to calculate the minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Function to calculate the total cost for each style
int calculate_cost(int x1, int y1, int x2, int y2) {
    int cost1 = x1 + y1;
    int cost2 = x2 + y2;
    return min(cost1, cost2);
}

// Main function to process test cases
int main() {
    int t; // Number of test cases
    scanf("%d", &t);
    
    // Iterate through each test case
    while (t--) {
        int x1, y1, x2, y2; // Inputs for each test case
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        // Calculate the total cost for each style
        int total_cost = calculate_cost(x1, y1, x2, y2);
        
        // Output the total cost for the chosen style
        printf("%d\n", total_cost);
    }

    return 0;
}
