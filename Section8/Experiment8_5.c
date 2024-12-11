/*Write a program which reads a string and prints it in alphabetical order. For example, the
word WELCOME should be displayed as CEELMOW.*/
#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                // Swap characters
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character introduced by fgets
    str[strcspn(str, "\n")] = '\0';

    sortString(str);

    printf("String in alphabetical order: %s\n", str);

    return 0;
}
