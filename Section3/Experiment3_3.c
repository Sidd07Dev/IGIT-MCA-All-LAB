/*Write a program to input a character and check whether it is in upper case or lower case
using conditional operator. [Hint: compare against the ASCII range.]*/

#include <stdio.h>

int main() {
    char ch;
    
    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check uppercase or lowercase using ASCII values and conditional operator
    (ch >= 'A' && ch <= 'Z') 
        ? printf("'%c' is an uppercase letter.\n", ch) 
        : (ch >= 'a' && ch <= 'z') 
            ? printf("'%c' is a lowercase letter.\n", ch) 
            : printf("'%c' is not a letter.\n", ch);

    return 0;
}
