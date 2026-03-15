/*
Program: Swap Two Numbers Using a Third Variable
Author: Aniruddha Sen
Day: 1
Description:
This program takes two numbers as input and swaps their
values using a third temporary variable.
*/

#include<stdio.h>
int main()
{
    int number1,number2,temp;
    printf("Please enter the first number: ");
    scanf("%d",&number1);
    printf("Please enter the second number: ");
    scanf("%d",&number2);

    printf("Before Swapping:\n");
    printf("number1 = %d\n",number1);
    printf("number2 = %d\n",number2);

    temp=number1;
    number1=number2;
    number2=temp;

    printf("After Swapping:\n");
    printf("number1 = %d\n",number1);
    printf("number2 = %d\n",number2);

    return 0;
}