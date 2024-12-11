/*Write a program to read ‘n’ real numbers and then insert a new real number at a given*/
#include <stdio.h>

int main() {
    int n, pos;
    float num;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements must be greater than 0.\n");
        return 1;
    }

    float arr[n + 1]; // Array with an extra space for the new number

    // Input the array elements
    printf("Enter %d real numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Input the new number and position
    printf("Enter the new real number: ");
    scanf("%f", &num);

    printf("Enter the position to insert the number (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position. It must be between 1 and %d.\n", n + 1);
        return 1;
    }

    // Adjust position for 0-based indexing
    pos--;

    // Shift elements to the right to create space
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number
    arr[pos] = num;

    // Display the updated array
    printf("Updated array:\n");
    for (int i = 0; i <= n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}
