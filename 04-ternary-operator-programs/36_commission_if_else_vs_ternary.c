/*
Program: Commission Calculation Using If-Else and Ternary Operator
Author: Aniruddha Sen
Day: 9
Description:
This program takes the value of x as user input and calculates
commission using both if-else statements and the ternary operator.
It then compares both results to verify that they are the same.

Commission Conditions:
-----------------------------------------------
Condition           | Commission
-----------------------------------------------
x < 40              | 4 * x + 100
x == 40             | 300
x > 40              | 4.5 * x + 150
-----------------------------------------------
*/

#include <stdio.h>

int main()
{
    float x;
    float commission_if;
    float commission_ternary;

    printf("Enter value of x: ");
    scanf("%f", &x);

    // Calculate commission using if-else
    if (x < 40)
        commission_if = 4 * x + 100;
    else if (x == 40)
        commission_if = 300;
    else
        commission_if = 4.5 * x + 150;

    // Calculate commission using ternary operator
    commission_ternary = (x < 40) ? (4 * x + 100) :
                         (x == 40) ? 300 :
                                     (4.5 * x + 150);

    printf("\nCommission using if-else: %.2f\n", commission_if);
    printf("Commission using ternary: %.2f\n", commission_ternary);

    if (commission_if == commission_ternary)
        printf("Both results are the same.\n");
    else
        printf("Both results are different.\n");

    return 0;
}