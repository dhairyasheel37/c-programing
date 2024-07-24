#include <stdio.h>

// Function prototype
int isPrime(int num);

int main() {
    int lower, upper, i;

    // Input the intervals
    printf("Enter the lower interval: ");
    scanf("%d", &lower);
    printf("Enter the upper interval: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);

    for (i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

// Function to check if a number is prime
int isPrime(int num) {
    int j;
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (j = 2; j*j <= num; j++) {
        if (num % j == 0) {
            return 0;
        }
    }
    return 1;
}
