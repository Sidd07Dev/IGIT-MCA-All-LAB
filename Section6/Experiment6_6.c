/*Write a menu-based program that takes two linear arrays A and B as input and displays
the results of the following operations based on user’s choice.
1. Traverse A.
2. Traverse B.
3. Insert a new element in A (after insertion, the size of A should increase by 1).
4. Insert a new element in B (after insertion, the size of B should increase by 1).
5. Delete an element from A.
6. Delete an element from B.
7. Search an element in A.
8. Search an element in B.
9. Sort A (in ascending order).
10. Sort B (in ascending order).
11. Merge A and B to form a new array C.*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void traverse(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return;
    }
    if (position < 0 || position > *size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
    printf("Element inserted successfully.\n");
}

void deleteElement(int arr[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }
    if (position < 0 || position >= *size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    printf("Element deleted successfully.\n");
}

void searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element %d found at position %d.\n", element, i + 1);
            return;
        }
    }
    printf("Element %d not found.\n", element);
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array sorted in ascending order.\n");
}

void mergeArrays(int a[], int b[], int sizeA, int sizeB, int c[], int *sizeC) {
    *sizeC = sizeA + sizeB;
    for (int i = 0; i < sizeA; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i < sizeB; i++) {
        c[sizeA + i] = b[i];
    }
    printf("Arrays merged successfully.\n");
}

int main() {
    int a[MAX_SIZE], b[MAX_SIZE], c[2 * MAX_SIZE];
    int sizeA = 0, sizeB = 0, sizeC = 0;
    int choice, element, position;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Traverse A\n");
        printf("2. Traverse B\n");
        printf("3. Insert in A\n");
        printf("4. Insert in B\n");
        printf("5. Delete from A\n");
        printf("6. Delete from B\n");
        printf("7. Search in A\n");
        printf("8. Search in B\n");
        printf("9. Sort A\n");
        printf("10. Sort B\n");
        printf("11. Merge A and B\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array A: ");
                traverse(a, sizeA);
                break;
            case 2:
                printf("Array B: ");
                traverse(b, sizeB);
                break;
            case 3:
                printf("Enter element to insert in A: ");
                scanf("%d", &element);
                printf("Enter position (0 to %d): ", sizeA);
                scanf("%d", &position);
                insertElement(a, &sizeA, element, position);
                break;
            case 4:
                printf("Enter element to insert in B: ");
                scanf("%d", &element);
                printf("Enter position (0 to %d): ", sizeB);
                scanf("%d", &position);
                insertElement(b, &sizeB, element, position);
                break;
            case 5:
                printf("Enter position to delete from A (0 to %d): ", sizeA - 1);
                scanf("%d", &position);
                deleteElement(a, &sizeA, position);
                break;
            case 6:
                printf("Enter position to delete from B (0 to %d): ", sizeB - 1);
                scanf("%d", &position);
                deleteElement(b, &sizeB, position);
                break;
            case 7:
                printf("Enter element to search in A: ");
                scanf("%d", &element);
                searchElement(a, sizeA, element);
                break;
            case 8:
                printf("Enter element to search in B: ");
                scanf("%d", &element);
                searchElement(b, sizeB, element);
                break;
            case 9:
                sortArray(a, sizeA);
                break;
            case 10:
                sortArray(b, sizeB);
                break;
            case 11:
                mergeArrays(a, b, sizeA, sizeB, c, &sizeC);
                printf("Merged Array C: ");
                traverse(c, sizeC);
                break;
            case 12:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
