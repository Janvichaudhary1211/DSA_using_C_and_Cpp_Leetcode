/* Butterfly pattern for n=5 */
#include <stdio.h>
int main() {
    int n = 5; // Number of rows in each half

    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) {
        // For left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // For spaces
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            printf(" ");
        }
        // For right stars (except the last star at the middle)
        for (int j = 1; j <= i - (i == n ? 1 : 0); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the butterfly
    for (int i = n - 1; i >= 1; i--) {
        // For left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // For spaces
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            printf(" ");
        }
        // For right stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

