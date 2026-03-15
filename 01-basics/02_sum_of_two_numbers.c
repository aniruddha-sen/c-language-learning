/*
Program: Sum of Two Numbers
Author: Aniruddha Sen
Day: 1
Description:
This program takes two numbers as input from the user
and displays their sum on the console.
*/

#include<stdio.h>
int main()
{
    int number1,number2,sum;
    printf("Please enter the first number: ");
    scanf("%d",&number1);
    printf("Please enter the second number: ");
    scanf("%d",&number2);
    sum=number1+number2;
    printf("Summation of %d and %d is: %d\n",number1,number2,sum);
    return 0;
}