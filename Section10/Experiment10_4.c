/*Write a program using function to input a m x n matrix (of integers) and then transpose
it.*/
#include <stdio.h>

// Function to input a matrix
void inputMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to transpose the matrix
void transposeMatrix(int matrix[][100], int transpose[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][100], int rows, int cols) {
    printf("\nMatrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    int matrix[100][100], transpose[100][100];

    // Input the matrix dimensions
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Input the matrix
    inputMatrix(matrix, m, n);

    // Display the original matrix
    displayMatrix(matrix, m, n);

    // Transpose the matrix
    transposeMatrix(matrix, transpose, m, n);

    // Display the transposed matrix
    displayMatrix(transpose, n, m);

    return 0;
}
