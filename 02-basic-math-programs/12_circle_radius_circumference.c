/*
Program: Circle Circumference
Author: Aniruddha Sen
Day: 3
Description:
This program takes the area of a circle and displays its circumference.
*/

#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>
int main() 
{
    float area,radius,circumference;
    printf("Please enter the area of the circle: ");
    scanf("%f",&area);
    radius=sqrt(area/M_PI);
    circumference=2*M_PI*radius;
    printf("The circumference of the circle is: %.2f\n",circumference);
    return 0;
}
