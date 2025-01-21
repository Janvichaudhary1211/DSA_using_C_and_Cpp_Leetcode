/* Alphabet Pattern for n=5 */
#include <stdio.h>
int main() {
    int n = 5; // Number of rows
    for (int i = 1; i <= n; i++) {
        // For left side of the alphabet pattern
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        // For spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // For right side of the alphabet pattern
        ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}