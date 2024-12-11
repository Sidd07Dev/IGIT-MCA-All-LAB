/*
Write a program to find the number of and sum of all integers greater than 100 and less
than 200 that are divisible by 7.
*/

#include <stdio.h>

int main() {
    int count = 0, sum = 0;

    // Loop through numbers greater than 100 and less than 200
    for (int i = 101; i < 200; i++) {
        if (i % 7 == 0) { // Check divisibility by 7
            count++;      // Increment the count
            sum += i;     // Add the number to the sum
        }
    }

    // Print the results
    printf("Number of integers divisible by 7: %d\n", count);
    printf("Sum of integers divisible by 7: %d\n", sum);

    return 0;
}
