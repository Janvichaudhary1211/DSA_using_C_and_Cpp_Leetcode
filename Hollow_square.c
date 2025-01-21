/* Hollow square pattern for n=5 */
#include <stdio.h>
int main() {
    int n = 5; // Size of the hollow square
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // To Print stars only for border elements
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("%d ", j);
            } else {
                printf("  "); // To Print space for hollow part
            }
        }
        printf("\n"); 
    }
    return 0;
}