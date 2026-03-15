/*
Program: Swap Two Numbers Without Using a Third Variable
Author: Aniruddha Sen
Day: 1
Description:
This program swaps the values of two numbers without
using any additional variable.
*/

#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Please enter the first number: ");
    scanf("%d",&number1);
    printf("Please enter the second number: ");
    scanf("%d",&number2);

    printf("Before Swapping:\n");
    printf("number1 = %d\n",number1);
    printf("number2 = %d\n",number2);

    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;

    printf("After Swapping:\n");
    printf("number1 = %d\n",number1);
    printf("number2 = %d\n",number2);

    return 0;
}