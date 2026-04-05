/*
Program: Triangle Validity Checker
Author: Aniruddha Sen
Day: 5
Description:
This program takes three sides of a triangle as input and checks whether 
they can form a valid triangle using the triangle inequality theorem.
*/

#include<stdio.h>
int main()
{
    float side1,side2,side3;
    printf("A triangle has three sides: side1, side2, and side3.\n\n");
    printf("Please enter the value of side1: ");
    scanf("%f",&side1);
    printf("Please enter the value of side2: ");
    scanf("%f",&side2);
    printf("Please enter the value of side3: ");
    scanf("%f",&side3);
    if((side1+side2)>side3 && 
        (side2+side3)>side1 && 
        (side1+side3)>side2)
    {
        printf("\nThe given sides CAN form a valid triangle.\n");
    }
    else
    {
        printf("\nThe given sides CANNOT form a valid triangle.\n");
    }
    return 0;
}