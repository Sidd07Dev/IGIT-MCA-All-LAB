/*Write a program to read ‘n’ numbers and find the frequency of occurrence of each
number.*/
#include <stdio.h>

void findFrequency(int arr[], int n) {
    int visited[n]; // Array to mark visited elements
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Number\tFrequency\n");

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip already processed elements
        }

        int count = 1; // Count occurrences of arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicates as visited
            }
        }

        // Print the number and its frequency
        printf("%d\t%d\n", arr[i], count);
    }
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements must be greater than 0.\n");
        return 1;
    }

    int arr[n];

    // Input the array elements
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and display frequencies
    findFrequency(arr, n);

    return 0;
}
