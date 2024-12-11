/*Write a program to take a number as input and check whether it is even or odd using
conditional operator (do not use if statement).*/

#include <stdio.h>

int main() {
    int number;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check even or odd using conditional operator
    (number % 2 == 0) 
        ? printf("%d is even.\n", number) 
        : printf("%d is odd.\n", number);

    return 0;
}
