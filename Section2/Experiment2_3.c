/*Write a program that requests two float type numbers from the user and then divides the
1st number by the 2nd and displays the result along with the numbers. */
#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);


    if (num2 == 0) {
        printf("Division by zero is not allowed.\n");
        return 1; 
    }

    // Perform the division
    result = num1 / num2;

    // Display the result
    printf("The result of dividing %.2f by %.2f is %.2f\n", num1, num2, result);

    return 0;
}
