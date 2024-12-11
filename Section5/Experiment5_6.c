/*Write a program to find out the HCF and LCM of two numbers.*/

#include <stdio.h>

// Function to calculate HCF using the Euclidean algorithm
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using the relation: LCM(a, b) = (a * b) / HCF(a, b)
int findLCM(int a, int b, int hcf) {
    return (a * b) / hcf;
}

int main() {
    int num1, num2, hcf, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate HCF
    hcf = findHCF(num1, num2);

    // Calculate LCM
    lcm = findLCM(num1, num2, hcf);

    // Print the results
    printf("HCF of %d and %d: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d: %d\n", num1, num2, lcm);

    return 0;
}
