/*Write a program that takes an integer ‘n’ as input and prints the Fibonacci series up to
‘n’. (Hint: Fibonacci series: 1 1 2 3 5 8 13 21 …)*/
#include <stdio.h>

int main() {
    int n, a = 1, b = 1, next;

    // Input the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Handle cases where n is 0 or 1
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;
    } else if (n == 1) {
        printf("Fibonacci series: 1\n");
        return 0;
    }

    // Print the Fibonacci series
    printf("Fibonacci series: ");
    printf("%d %d ", a, b); // Print the first two terms

    for (int i = 3; i <= n; i++) {
        next = a + b;       // Calculate the next term
        printf("%d ", next); // Print the next term
        a = b;              // Update variables for the next iteration
        b = next;
    }

    printf("\n");
    return 0;
}
