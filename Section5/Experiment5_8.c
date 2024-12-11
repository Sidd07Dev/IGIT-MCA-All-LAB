/*Write a program to input a number and check whether it is Armstrong or not (An
Armstrong number is an integer such that the sum of the cubes of its digits is equal to the number itself. For
example, 371 is an Armstrong number since 33 + 73 + 13 = 371).*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number
    original = num;

    // Find the number of digits in the number
    int digits = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate the sum of powers of its digits
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        sum += pow(remainder, digits); // Add the power of the digit to the sum
        num /= 10;                     // Remove the last digit
    }

    // Check if the sum is equal to the original number
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
