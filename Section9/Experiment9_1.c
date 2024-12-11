/*Write a program using pointers to input a 4X5 matrix and then display it.  */
#include <stdio.h>

#define ROWS 4
#define COLS 5

void inputMatrix(int (*matrix)[COLS], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", *(matrix + i) + j);
        }
    }
}

void displayMatrix(int (*matrix)[COLS], int rows, int cols) {
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS];

    inputMatrix(matrix, ROWS, COLS);
    displayMatrix(matrix, ROWS, COLS);

    return 0;
}
