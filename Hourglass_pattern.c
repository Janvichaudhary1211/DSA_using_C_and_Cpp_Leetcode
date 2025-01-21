/* Hourglass Pattern for n=5 */
#include <stdio.h>
int main() {
    int n = 5; // Number of rows for the hourglass pattern
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // For decreasing alphabets
        char ch = 'A';
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    // Lower part of the hourglass
    for (int i = n - 2; i >= 0; i--) {
        // spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // For increasing alphabets
        char ch = 'A';
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}