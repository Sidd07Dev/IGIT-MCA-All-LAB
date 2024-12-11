/*Write a program to input three numbers and find out the smallest.*/

#include <stdio.h>

int main() {
    int num1, num2, num3, smallest;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }
    printf("The smallest number is: %d\n", smallest);

    return 0;
}