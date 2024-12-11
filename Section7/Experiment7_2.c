/*Write a program to input a square matrix (a matrix of order n × n) and then print its upper
triangular matrix.*/
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

    // Input the elements of the matrix
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the upper triangular matrix
    printf("\nUpper Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) {
                printf("0 ");
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
