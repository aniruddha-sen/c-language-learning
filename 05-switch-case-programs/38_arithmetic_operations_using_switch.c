/*
Program: Arithmetic Operations Using Switch-Case
Author: Aniruddha Sen
Day: 10
Description:
This program takes two numbers as input and performs addition,
difference, multiplication, or division according to the user's choice.

Operations:
---------------------------------------
Choice              | Operation
---------------------------------------
1                   | Addition
2                   | Difference
3                   | Multiplication
4                   | Division
---------------------------------------
*/

#include <stdio.h>

int main()
{
    float a, b, result;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\n1. Addition\n");
    printf("2. Difference\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            result = a + b;
            printf("Addition: %.2f\n", result);
            break;

        case 2:
            result = a - b;
            printf("Difference: %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication: %.2f\n", result);
            break;

        case 4:
            if (b != 0)
            {
                result = a / b;
                printf("Division: %.2f\n", result);
            }
            else
            {
                printf("Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}