/*Write a program using pointers to read an array of integers and print its elements in
reverse order.*/
#include <stdio.h>

void inputArray(int *arr, int size) {
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", arr + i);  // Store input directly using a pointer
    }
}

void printArrayReverse(int *arr, int size) {
    printf("\nArray elements in reverse order:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));  // Access elements using a pointer
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];  // Declare the array

    inputArray(arr, size);       // Input elements using pointers
    printArrayReverse(arr, size);  // Print elements in reverse using pointers

    return 0;
}
