/*Write a program that reads two strings and then compares them without using the
strcmp() function.*/
#include <stdio.h>

int compareStrings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 > *str2) ? 1 : -1;
        }
        str1++;
        str2++;
    }

    // Check if strings are of different lengths
    if (*str1 == '\0' && *str2 == '\0') {
        return 0;  // Strings are equal
    } else {
        return (*str1 == '\0') ? -1 : 1;  // One string is longer
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters introduced by fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The first string is less than the second string.\n");
    }

    return 0;
}
