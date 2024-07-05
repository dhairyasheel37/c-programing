#include <stdio.h>

int main() {
    int sheets;
    int num1000 = 0, num500 = 0, num100 = 0, numSingles = 0;
    float totalCost = 0.0;

    // Input the number of sheets required
    printf("Enter the minimum number of sheets required: ");
    scanf("%d", &sheets);

    // Calculate the number of 1000-sheet packages needed
    if (sheets >= 1000) {
        num1000 = sheets / 1000;
        sheets = sheets % 1000;
        totalCost += num1000 * 1000 * 0.03;
    }

    // Calculate the number of 500-sheet packages needed
    if (sheets >= 500) {
        num500 = sheets / 500;
        sheets = sheets % 500;
        totalCost += num500 * 500 * 0.04;
    }

    // Calculate the number of 100-sheet packages needed
    if (sheets >= 100) {
        num100 = sheets / 100;
        sheets = sheets % 100;
        totalCost += num100 * 100 * 0.055;
    }

    // Calculate the number of single sheets needed
    if (sheets > 0) {
        numSingles = sheets;
        totalCost += numSingles * 0.10;
    }

    // Print the result
    printf("The customer should buy:\n");
    if (num1000 > 0) printf("%d package(s) of 1000 sheets\n", num1000);
    if (num500 > 0) printf("%d package(s) of 500 sheets\n", num500);
    if (num100 > 0) printf("%d package(s) of 100 sheets\n", num100);
    if (numSingles > 0) printf("%d single sheet(s)\n", numSingles);
    printf("The total cost is: Rs %.2f\n", totalCost);

    return 0;
}
