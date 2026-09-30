/*
Program: Maximum of Three Numbers Using Nested Ternary Operator
Author: Aniruddha Sen
Day: 9
Description:
This program takes three numbers as input and finds the maximum
number using a nested ternary operator.
*/

#include <stdio.h>

int main()
{
    int a, b, c, maximum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    maximum = (a > b) ?
             ((a > c) ? a : c) :
             ((b > c) ? b : c);

    printf("Maximum number: %d\n", maximum);

    return 0;
}