/*Write a menu-based program that takes two matrixes A and B as input and displays the
results of the following operations based on user’s choice.
1. A + B
2. A - B
3. B - A
4. A × B*/
#include <stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[10][10], int B[10][10], int result[10][10], int rowsA, int colsA, int rowsB, int colsB) {
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible. Number of columns of A must equal number of rows of B.\n");
        return;
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int rowsA, colsA, rowsB, colsB;
    int choice;

    // Input the dimensions of matrix A
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    // Input the matrix A
    inputMatrix(A, rowsA, colsA);

    // Input the dimensions of matrix B
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    // Input the matrix B
    inputMatrix(B, rowsB, colsB);

    do {
        // Menu options
        printf("\nMenu:\n");
        printf("1. A + B\n");
        printf("2. A - B\n");
        printf("3. B - A\n");
        printf("4. A × B\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rowsA == rowsB && colsA == colsB) {
                    addMatrices(A, B, result, rowsA, colsA);
                    printf("\nA + B is:\n");
                    displayMatrix(result, rowsA, colsA);
                } else {
                    printf("Matrix addition is not possible. Matrices must have the same dimensions.\n");
                }
                break;

            case 2:
                if (rowsA == rowsB && colsA == colsB) {
                    subtractMatrices(A, B, result, rowsA, colsA);
                    printf("\nA - B is:\n");
                    displayMatrix(result, rowsA, colsA);
                } else {
                    printf("Matrix subtraction is not possible. Matrices must have the same dimensions.\n");
                }
                break;

            case 3:
                if (rowsA == rowsB && colsA == colsB) {
                    subtractMatrices(B, A, result, rowsB, colsB);
                    printf("\nB - A is:\n");
                    displayMatrix(result, rowsB, colsB);
                } else {
                    printf("Matrix subtraction is not possible. Matrices must have the same dimensions.\n");
                }
                break;

            case 4:
                if (colsA == rowsB) {
                    multiplyMatrices(A, B, result, rowsA, colsA, rowsB, colsB);
                    printf("\nA × B is:\n");
                    displayMatrix(result, rowsA, colsB);
                } else {
                    printf("Matrix multiplication is not possible. The number of columns of A must equal the number of rows of B.\n");
                }
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
