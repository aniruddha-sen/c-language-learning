/*
Program: Rectangle Area and Perimeter
Author: Aniruddha Sen
Day: 2
Description:
This program calculates the area and perimeter of a rectangle based on user input.
*/

#include<stdio.h>
int main()
{
    float length,width,area,perimeter;
    printf("Please enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Please enter the width of the rectangle: ");
    scanf("%f",&width);
    area=length*width;
    perimeter=2*(length+width);
    printf("Area of the rectangle: %.2f square units\n",area);
    printf("Perimeter of the rectangle: %.2f units\n",perimeter);
    return 0;
}