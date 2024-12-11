/*Write a program to read the price of an item in decimal form (like 15.95) and print the
output in paise (like 1595 paise).*/

#include <stdio.h>

int main() {
    float price; // Variable to store the price in decimal form
    int paise;   // Variable to store the price in paise

    // Prompt the user to enter the price
    printf("Enter the price of the item (in decimal, e.g., 15.95): ");
    scanf("%f", &price);

    // Convert the price to paise
    paise = (int)(price * 100 + 0.5); // Add 0.5 for rounding to the nearest integer

    // Print the result in paise
    printf("The price in paise is: %d paise\n", paise);

    return 0;
}