/*Use recursive function calls to evaluate the following series:
x - (x3/3!) + (x5/5!) - (x7/7!) + …*/
#include <stdio.h>
#include <math.h>

// Function to calculate factorial recursively
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Recursive function to calculate the series
double evaluateSeries(double x, int n) {
    if (n == 1) {
        return x; // First term of the series
    }
    int exponent = 2 * n - 1; // Calculate the power of x
    double term = pow(x, exponent) / factorial(exponent); // Calculate term value
    if (n % 2 == 0) {
        term = -term; // Alternate the sign for even terms
    }
    return term + evaluateSeries(x, n - 1); // Add the term and recurse for the next
}

int main() {
    double x;
    int terms;

    // Input x and number of terms
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Evaluate the series
    double result = evaluateSeries(x, terms);

    // Print the result
    printf("The result of the series is: %.6lf\n", result);

    return 0;
}
