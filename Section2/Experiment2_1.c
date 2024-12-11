/*Write a program to compute the area of a triangle given its base and height.*/

#include <stdio.h>

int main() {
    float base, height, area;

    //  user to enter the base
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    //  user to enter the height
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area of the triangle
    area = 0.5 * base * height;

    // Display the result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
