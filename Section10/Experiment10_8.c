/*Write a function using pointers that compares two integer arrays to see whether they
are identical. The function returns 1 if they are identical, 0 otherwise.*/
#include <stdio.h>

// Function to compare two integer arrays
int areIdentical(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        if (*(arr1 + i) != *(arr2 + i)) {
            return 0; // Arrays are not identical
        }
    }
    return 1; // Arrays are identical
}

int main() {
    int size;

    // Input size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    // Input elements for the first array
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Compare the arrays
    if (areIdentical(arr1, arr2, size)) {
        printf("The arrays are identical.\n");
    } else {
        printf("The arrays are not identical.\n");
    }

    return 0;
}
