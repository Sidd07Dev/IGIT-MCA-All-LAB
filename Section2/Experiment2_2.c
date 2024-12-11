/*Write a program that takes as input, the principal, rate of interest, and time, and then
calculates the simple and compound interest.*/
#include <stdio.h>
#include <math.h> // For the pow function

int main() {
    double principal, rate, time, simpleInterest, compoundInterest;

    // Input: Principal
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    // Input: Rate of interest
    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    // Input: Time (in years)
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Output results
    printf("Simple Interest: %.2lf\n", simpleInterest);
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
