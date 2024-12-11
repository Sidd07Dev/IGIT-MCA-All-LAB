/*Write a program to input a character and check whether it is a vowel or consonant using
conditional operator. [Hint: compare against the ASCII range.]*/

#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check vowel or consonant using conditional operator
    ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) // Check if it's a letter
        ? ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || 
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            ? printf("'%c' is a vowel.\n", ch) 
            : printf("'%c' is a consonant.\n", ch))
        : printf("'%c' is not a letter.\n", ch);

    return 0;
}
