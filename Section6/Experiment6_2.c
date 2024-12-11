/*Write a program to input ‘n’ numbers and print the 2nd largest and 2nd smallest number.*/
#include <stdio.h>

void findSecondLargestAndSmallest(int arr[], int n, int *secondLargest, int *secondSmallest) {
    int largest, smallest;

    // Initialize the largest and smallest
    largest = smallest = arr[0];
    *secondLargest = *secondSmallest = -1;

    // Find the largest and smallest elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            *secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && (arr[i] > *secondLargest || *secondLargest == -1)) {
            *secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            *secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && (arr[i] < *secondSmallest || *secondSmallest == -1)) {
            *secondSmallest = arr[i];
        }
    }
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least two numbers are required.\n");
        return 1;
    }

    int arr[n];

    // Input the numbers
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int secondLargest, secondSmallest;

    // Find the second largest and smallest numbers
    findSecondLargestAndSmallest(arr, n, &secondLargest, &secondSmallest);

    // Display the results
    if (secondLargest == -1 || secondSmallest == -1) {
        printf("No distinct second largest or second smallest number exists.\n");
    } else {
        printf("Second Largest: %d\n", secondLargest);
        printf("Second Smallest: %d\n", secondSmallest);
    }

    return 0;
}
