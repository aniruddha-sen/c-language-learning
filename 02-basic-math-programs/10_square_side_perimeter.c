/*
Program: Square Side and Perimeter
Author: Aniruddha Sen
Day: 3
Description:
This program takes the area of a square and displays its perimeter.
*/

/*
Program: Square Perimeter Calculation
Author: Aniruddha Sen
Day: 3
Description:
This program calculates the perimeter of a square 
given its area.
*/

#include<stdio.h>
#include<math.h>
int main() 
{
    float side,area,perimeter;
    printf("Please enter the area of the square: ");
    scanf("%f",&area);
    side=sqrt(area);
    perimeter=4*side;
    printf("The perimeter of the square is: %.2f\n",perimeter);
    return 0;
}