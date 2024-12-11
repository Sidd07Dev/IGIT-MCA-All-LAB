/*Write a program that takes as input a string and two numbers n1 and n2 and find the
substring between these two positions. For example, let the string is “Welcome” and the numbers are
n1=2 and n2=5 then the substring will be: “lcom”.*/
#include <stdio.h>
#include <string.h>

void substring(const char *str, int n1, int n2, char *result) {
    int i, j = 0;
    for (i = n1; i <= n2 && str[i] != '\0'; i++) {
        result[j++] = str[i];
    }
    result[j] = '\0';  // Null-terminate the result
}

int main() {
    char str[100], result[100];
    int n1, n2;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character introduced by fgets
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the starting position (n1): ");
    scanf("%d", &n1);

    printf("Enter the ending position (n2): ");
    scanf("%d", &n2);

    if (n1 < 0 || n2 < 0 || n1 > n2 || n2 >= strlen(str)) {
        printf("Invalid positions.\n");
        return 1;
    }

    substring(str, n1, n2, result);

    printf("The substring between positions %d and %d is: \"%s\"\n", n1, n2, result);

    return 0;
}
