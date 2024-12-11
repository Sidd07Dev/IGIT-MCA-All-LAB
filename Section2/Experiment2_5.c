/* Rewrite the program mentioned in Experiment 2.2. However, rename the data types
‘float’ to ‘Decimal’ and ‘int’ to ‘integer’ by using typedef statement.*/

#include <stdio.h>
#include <math.h>

// Renaming data types using typedef
typedef float Decimal;
typedef int integer;

int main() {
    Decimal principal, rate, simpleInterest, compoundInterest;
    integer time;

    // Input values
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%d", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Display the results
    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
