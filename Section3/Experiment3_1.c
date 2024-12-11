/*Write a program to compute the area of a triangle given its three sides.*/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    // Input the sides of the triangle
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate the semi-perimeter
        s = (a + b + c) / 2.0;

        // Calculate the area using Heron's formula
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        // Output the result
        printf("The area of the triangle is: %.2lf\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
