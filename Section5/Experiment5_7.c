/*Write a program to input a number and check whether it is palindrome or not (a
palindrome number is a number that remains the same when its digits are reversed, e.g., 16461).*/

#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number
    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num /= 10;                    // Remove the last digit
    }

    // Check if the original number and reversed number are equal
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
