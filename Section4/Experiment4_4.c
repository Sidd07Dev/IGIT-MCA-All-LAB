/*Write a program that will read the value of x and evaluate the following function:
     1 for x>0
y =  0 for x = 0
    -1 for x<0    */

    #include <stdio.h>

int main() {
    int x;
    int y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    if (x > 0) {
        y = 1;
    } else if (x == 0) {
        y = 0;
    } else {
        y = -1;
    }
    printf("The value of y is: %d\n", y);

    return 0;
}