/* Pascal's Triangle for n=5 */
#include <stdio.h>
int main() {
    int n = 5; // Number of rows in Pascal's Triangle

    for (int i = 0; i < n; i++) {
        // To Print leading spaces for alignment
        for (int space = 0; space < n - i - 1; space++) {
            printf(" ");
        }
        // Calculate and print each value in the row
        int value = 1; // First value in every row is always 1
        for (int j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1); // Updating value using Binomial Coefficient formula
        }
        printf("\n");
    }
    return 0;
}