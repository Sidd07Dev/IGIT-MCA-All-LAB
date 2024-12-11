//This program is designed for the purpose of takes the radius of a circle and displays its area and perimeter
#include<stdio.h> //including the header file or library
#define pi 3.14 //here defining the value of pi as a global
//function designed for calculating area
float calculateArea(int radious){
    float area;
    area=(float) (pi * radious *radious);
    return area;
}
//function designed for calculating perimeter
float calculatePerimeter(int radious){
    float perimeter;
    perimeter=(float) (2 * pi * radious );
    return perimeter;
}
//Here starting of main function
int main(){
//here variable declaration started
int radious;
float area,perimeter;
printf("This program work for calculating area and perimeter of a circle\n ");
printf("Enter the radious of the circle :-");
scanf("%d",&radious);
//calling the respective function and hold results in variables
area=calculateArea(radious);
perimeter=calculatePerimeter(radious);
//printing the values
printf("Area of the Circle is %f\n",area);
printf("Perimeter of the Circle is %f\n",perimeter);
return 0;
}