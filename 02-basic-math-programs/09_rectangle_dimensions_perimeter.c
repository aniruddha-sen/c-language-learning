/*
Program: Rectangle Dimensions and Perimeter
Author: Aniruddha Sen
Day: 3
Description:
This program takes the area and length of a rectangle and displays its perimeter.
*/

#include<stdio.h>
int main() 
{
    float length,area,width,perimeter;
    printf("Please enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Please enter the area of the rectangle: ");
    scanf("%f",&area);
    width=area/length;
    perimeter=2*(length+width);
    printf("The perimeter of the rectangle is: %.2f\n",perimeter);
    return 0;
}
