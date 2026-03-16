/*
Program: Square Area and Perimeter
Author: Aniruddha Sen
Day: 2
Description:
This program calculates the area and perimeter of a square based on user input.
*/

#include<stdio.h>
int main()
{
    float side,area,perimeter;
    printf("Please enter the side length of the square: ");
    scanf("%f",&side);
    area=side*side;
    perimeter=4*side;
    printf("Area of the square: %.2f square units\n",area);
    printf("Perimeter of the square: %.2f units\n",perimeter);
    return 0;
}