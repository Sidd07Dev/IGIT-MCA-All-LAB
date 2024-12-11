/*Write a program that finds the sum of diagonal elements of a square matrix.*/
#include <stdio.h>

int main() {
    int n;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size. The matrix size must be greater than 0.\n");
        return 1;
    }

    int matrix[n][n];
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Input the elements of the matrix
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);

            // Add to the primary diagonal sum if i == j
            if (i == j) {
                primaryDiagonalSum += matrix[i][j];
            }

            // Add to the secondary diagonal sum if i + j == n - 1
            if (i + j == n - 1) {
                secondaryDiagonalSum += matrix[i][j];
            }
        }
    }

    // Output the results
    printf("\nSum of the primary diagonal elements: %d\n", primaryDiagonalSum);
    printf("Sum of the secondary diagonal elements: %d\n", secondaryDiagonalSum);

    return 0;
}
