/*
Program: Triangle Area Calculator Using Switch-Case
Author: Aniruddha Sen
Day: 10
Description:
This program calculates the area of an equilateral triangle,
right-angled triangle, or scalene triangle according to
the user's choice using a switch-case statement.

Formulas:
------------------------------------------------------------
Choice | Triangle Type       | Formula
------------------------------------------------------------
1      | Equilateral         | (√3 / 4) × s²
2      | Right-Angled        | (1 / 2) × b × h
3      | Scalene             | √(s × (s-a) × (s-b) × (s-c))
------------------------------------------------------------

For scalene triangle:
s = (a + b + c) / 2
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float s, b, h;
    float a, side_b, c;
    float area;

    printf("1. Equilateral Triangle\n");
    printf("2. Right-Angled Triangle\n");
    printf("3. Scalene Triangle\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter side of equilateral triangle: ");
            scanf("%f", &s);

            area = (sqrt(3) / 4) * s * s;

            printf("Area of Equilateral Triangle: %.2f\n", area);
            break;

        case 2:
            printf("Enter base of right-angled triangle: ");
            scanf("%f", &b);

            printf("Enter height of right-angled triangle: ");
            scanf("%f", &h);

            area = 0.5 * b * h;

            printf("Area of Right-Angled Triangle: %.2f\n", area);
            break;

        case 3:
            printf("Enter first side: ");
            scanf("%f", &a);

            printf("Enter second side: ");
            scanf("%f", &side_b);

            printf("Enter third side: ");
            scanf("%f", &c);

            s = (a + side_b + c) / 2;

            area = sqrt(s * (s - a) * (s - side_b) * (s - c));

            printf("Area of Scalene Triangle: %.2f\n", area);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}