/*
Write a program to count the number of digits in a number 
*/
#include <stdio.h>

int main() {
    int num, count = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Special case for 0
    if (num == 0) {
        count = 1;
    } else {
        // Count digits
        while (num != 0) {
            num /= 10; // Remove the last digit
            count++;   // Increment the digit count
        }
    }

    // Print the result
    printf("The number of digits is: %d\n", count);

    return 0;
}
