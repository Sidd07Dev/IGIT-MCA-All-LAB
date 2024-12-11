/*Write programs to print the following structure:
   *
  ***
 *****
*******
*/

#include <stdio.h>

int main() {
    int n = 4; // Number of rows for the pyramid
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}
