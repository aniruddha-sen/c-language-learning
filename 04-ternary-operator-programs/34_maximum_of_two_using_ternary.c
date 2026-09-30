/*
Program: Maximum of Two Numbers Using Ternary Operator
Author: Aniruddha Sen
Day: 9
Description:
This program takes two numbers as input and finds the maximum
number using the ternary operator.
*/

#include <stdio.h>

int main()
{
    int a, b, maximum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    maximum = (a > b) ? a : b;

    printf("Maximum number: %d\n", maximum);

    return 0;
}