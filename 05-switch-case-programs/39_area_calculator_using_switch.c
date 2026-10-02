/*
Program: Area Calculator Using Switch-Case
Author: Aniruddha Sen
Day: 10
Description:
This program calculates the area of a rectangle, square, or circle
according to the user's choice.

Menu:
---------------------------------------
Choice              | Shape
---------------------------------------
1                   | Rectangle
2                   | Square
3                   | Circle
---------------------------------------
*/

#include <stdio.h>

int main()
{
    int choice;
    float length, width, side, radius, area;

    printf("1. Area of Rectangle\n");
    printf("2. Area of Square\n");
    printf("3. Area of Circle\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter length: ");
            scanf("%f", &length);

            printf("Enter width: ");
            scanf("%f", &width);

            area = length * width;

            printf("Area of Rectangle: %.2f\n", area);
            break;

        case 2:
            printf("Enter side: ");
            scanf("%f", &side);

            area = side * side;

            printf("Area of Square: %.2f\n", area);
            break;

        case 3:
            printf("Enter radius: ");
            scanf("%f", &radius);

            area = 3.14159 * radius * radius;

            printf("Area of Circle: %.2f\n", area);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}