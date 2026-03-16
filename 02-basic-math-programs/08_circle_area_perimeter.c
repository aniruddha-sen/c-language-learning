/*
Program: Circle Area and Perimeter
Author: Aniruddha Sen
Day: 2
Description:
This program calculates the area and perimeter (circumference) of a circle based on user input.
*/

#include<stdio.h>
// Enable mathematical constants like M_PI when using <math.h> (needed in MSVC/Windows compilers)
#define _USE_MATH_DEFINES  
// Include the C standard math library for functions (e.g., sqrt, pow, acos) and constants (e.g., M_PI)
#include<math.h>
int main()
{
    float radius,area,circumference;
    printf("Please enter the radius of the circle: ");
    scanf("%f",&radius);
    area=M_PI*radius*radius;
    circumference=2*M_PI*radius;
    printf("Area of the circle: %.2f square units\n",area);
    printf("Circumference of the circle: %.2f units\n",circumference);
    return 0;
}