/* Using pointers, write a function that receives a character string and a character as
arguments and deletes all occurrence of this character in the string. The function should return the
corrected string with no holes.*/
#include <stdio.h>

// Function to remove all occurrences of a character from a string
void removeCharacter(char *str, char ch) {
    char *src = str, *dest = str;

    // Traverse the string
    while (*src != '\0') {
        if (*src != ch) {
            *dest = *src; // Copy character if it doesn't match ch
            dest++;
        }
        src++;
    }
    *dest = '\0'; // Null-terminate the corrected string
}

int main() {
    char str[100], ch;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from fgets (if present)
    char *newline = str;
    while (*newline != '\0') {
        if (*newline == '\n') {
            *newline = '\0';
            break;
        }
        newline++;
    }

    // Input the character to remove
    printf("Enter the character to remove: ");
    scanf("%c", &ch);

    // Remove the character from the string
    removeCharacter(str, ch);

    // Output the corrected string
    printf("Corrected string: %s\n", str);

    return 0;
}
