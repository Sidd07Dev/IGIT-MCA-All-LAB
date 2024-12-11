/*Write a function using pointers to add two matrices and return the resultant matrix. Use
this function within the main function to add two matrices.*/
#include <stdio.h>
#include <stdlib.h>

// Function to add two matrices
void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Use pointer arithmetic to access elements
            *(result + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}

// Function to input a matrix
void inputMatrix(int *matrix, int rows, int cols) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", matrix + i * cols + j);
        }
    }
}

// Function to display a matrix
void displayMatrix(int *matrix, int rows, int cols) {
    printf("Matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the matrices
    int *mat1 = (int *)malloc(rows * cols * sizeof(int));
    int *mat2 = (int *)malloc(rows * cols * sizeof(int));
    int *result = (int *)malloc(rows * cols * sizeof(int));

    // Input matrices
    printf("\nMatrix 1:\n");
    inputMatrix(mat1, rows, cols);

    printf("\nMatrix 2:\n");
    inputMatrix(mat2, rows, cols);

    // Add the matrices
    addMatrices(mat1, mat2, result, rows, cols);

    // Display the matrices and the result
    printf("\nMatrix 1:\n");
    displayMatrix(mat1, rows, cols);

    printf("\nMatrix 2:\n");
    displayMatrix(mat2, rows, cols);

    printf("\nResultant Matrix:\n");
    displayMatrix(result, rows, cols);

    // Free allocated memory
    free(mat1);
    free(mat2);
    free(result);

    return 0;
}
