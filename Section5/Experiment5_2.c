/*
Write a program to print the following structure:
 4321234
  32123
   212
    1
*/
#include <stdio.h>

int main() {
    int n = 4; // Number of rows for the pattern

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }

        // Print decreasing numbers
        for (int j = n - i + 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Print increasing numbers
        for (int j = 2; j <= n - i + 1; j++) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
