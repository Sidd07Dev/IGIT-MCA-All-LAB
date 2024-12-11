/*Write a program to read a four-digit integer and print the sum of its digits. [Hint: Use /
and % operators.]*/

#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, sum;

    // Input a four-digit integer
    printf("Enter a four-digit integer: ");
    scanf("%d", &number);

    // Extract each digit
    digit1 = number / 1000;            // Get the thousands place
    digit2 = (number / 100) % 10;      // Get the hundreds place
    digit3 = (number / 10) % 10;       // Get the tens place
    digit4 = number % 10;              // Get the ones place

    // Calculate the sum of the digits
    sum = digit1 + digit2 + digit3 + digit4;

    // Print the result
    printf("The sum of the digits of %d is: %d\n", number, sum);

    return 0;
}
