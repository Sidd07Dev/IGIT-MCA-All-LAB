/*Write a program that will count the number of occurrences of a specific character in a
given line of text.*/
#include <stdio.h>

int countOccurrences(const char *str, char target) {
    int count = 0;
    while (*str != '\0') {
        if (*str == target) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100], target;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &target);

    int occurrences = countOccurrences(str, target);

    printf("The character '%c' appears %d time(s) in the text.\n", target, occurrences);

    return 0;
}
