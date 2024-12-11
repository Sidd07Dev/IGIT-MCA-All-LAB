/*Write a program to input a square matrix (a matrix of order n × n) and check whether it is
symmetric or not (A matrix A = (aij) is symmetric if aij = aji, for all i and j).*/
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

    // Check for symmetry
    int isSymmetric = 1; // Assume the matrix is symmetric
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // The matrix is not symmetric
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Display the result
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
