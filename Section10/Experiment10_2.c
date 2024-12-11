/*Write a program using function to take a string as input and then convert all lowercase
characters to its uppercase equivalent.*/
#include <stdio.h>
#include <ctype.h>

// Function to convert lowercase characters to uppercase
void convertToUppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) { // Check if the character is lowercase
            str[i] = toupper(str[i]); // Convert to uppercase
        }
    }
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to uppercase
    convertToUppercase(str);

    // Output the result
    printf("String in uppercase: %s\n", str);

    return 0;
}
