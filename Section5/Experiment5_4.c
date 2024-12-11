/*
Write a program that takes as input an integer ‘n’ and computes the following series: 1 -
(2/3!) + (3/4!) - (4/5!) + .... ± (n/(n+1)!).
*/

#include <stdio.h>

// Function to compute factorial of a number
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double result = 0.0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Compute the series
    for (int i = 1; i <= n; i++) {
        double term = (double)i / factorial(i + 1); // Compute the term i / (i+1)!
        if (i % 2 == 0) {
            result -= term; // Subtract the term for even indices
        } else {
            result += term; // Add the term for odd indices
        }
    }

    // Print the result
    printf("The result of the series is: %.6f\n", result);

    return 0;
}
