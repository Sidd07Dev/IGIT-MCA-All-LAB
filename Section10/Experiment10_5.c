/* Write a program using function to input a m x n matrix (of integers) and then find the
largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it.*/
#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 100

// Function to input a matrix
void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to find the largest, 2nd largest, smallest, and 2nd smallest elements
void findExtremes(int matrix[][MAX_SIZE], int rows, int cols, int *largest, int *secondLargest, int *smallest, int *secondSmallest) {
    *largest = *secondLargest = INT_MIN;
    *smallest = *secondSmallest = INT_MAX;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int value = matrix[i][j];

            // Update largest and second largest
            if (value > *largest) {
                *secondLargest = *largest;
                *largest = value;
            } else if (value > *secondLargest && value != *largest) {
                *secondLargest = value;
            }

            // Update smallest and second smallest
            if (value < *smallest) {
                *secondSmallest = *smallest;
                *smallest = value;
            } else if (value < *secondSmallest && value != *smallest) {
                *secondSmallest = value;
            }
        }
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int largest, secondLargest, smallest, secondSmallest;

    // Input matrix dimensions
    printf("Enter the number of rows (m): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (n): ");
    scanf("%d", &cols);

    // Input the matrix
    inputMatrix(matrix, rows, cols);

    // Find the extremes
    findExtremes(matrix, rows, cols, &largest, &secondLargest, &smallest, &secondSmallest);

    // Display the results
    printf("\nLargest: %d\n", largest);
    printf("2nd Largest: %d\n", secondLargest);
    printf("Smallest: %d\n", smallest);
    printf("2nd Smallest: %d\n", secondSmallest);

    return 0;
}
