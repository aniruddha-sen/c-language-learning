/*
Program: Solid Volume Calculator Using Switch-Case
Author: Aniruddha Sen
Day: 10
Description:
This program calculates the volume of a cylinder, cone,
or sphere according to the user's choice using a switch-case statement.

Pi = 22 / 7

Formulas:
------------------------------------------------------------
Choice | Solid       | Formula
------------------------------------------------------------
1      | Cylinder    | π × r² × h
2      | Cone        | (1 / 3) × π × r² × h
3      | Sphere      | (4 / 3) × π × r³
------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int choice;
    float r, h;
    float volume;
    const float pi = 22.0 / 7.0;

    printf("1. Cylinder\n");
    printf("2. Cone\n");
    printf("3. Sphere\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter radius of cylinder: ");
            scanf("%f", &r);

            printf("Enter height of cylinder: ");
            scanf("%f", &h);

            volume = pi * r * r * h;

            printf("Volume of Cylinder: %.2f\n", volume);
            break;

        case 2:
            printf("Enter radius of cone: ");
            scanf("%f", &r);

            printf("Enter height of cone: ");
            scanf("%f", &h);

            volume = (1.0 / 3.0) * pi * r * r * h;

            printf("Volume of Cone: %.2f\n", volume);
            break;

        case 3:
            printf("Enter radius of sphere: ");
            scanf("%f", &r);

            volume = (4.0 / 3.0) * pi * r * r * r;

            printf("Volume of Sphere: %.2f\n", volume);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}