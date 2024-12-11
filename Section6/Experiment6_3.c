/*Write a program to read ‘n’ characters and then delete the duplicate characters.*/
#include <stdio.h>
#include <string.h>

void removeDuplicates(char arr[], int n) {
    int index = 0; // To store the index of unique characters

    // Traverse the array
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        // Check if the current character is already in the unique part of the array
        for (int j = 0; j < index; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1; // Mark as duplicate
                break;
            }
        }

        // If not duplicate, add to the unique part
        if (!isDuplicate) {
            arr[index++] = arr[i];
        }
    }

    // Add null terminator for a string-like representation
    arr[index] = '\0';
}

int main() {
    int n;

    // Input the number of characters
    printf("Enter the number of characters: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of characters should be greater than 0.\n");
        return 1;
    }

    char arr[n + 1]; // Extra space for null terminator

    // Input the characters
    printf("Enter %d characters (without spaces): ", n);
    scanf("%s", arr);

    if (strlen(arr) != n) {
        printf("Error: Input does not match the specified length.\n");
        return 1;
    }

    // Remove duplicates
    removeDuplicates(arr, n);

    // Print the result
    printf("Characters after removing duplicates: %s\n", arr);

    return 0;
}
