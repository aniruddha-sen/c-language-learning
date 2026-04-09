/*
Program: Leap Year Checker
Author: Aniruddha Sen
Day: 8
Description:
Checks whether a given year is a leap year or not.

Rules:
---------------------------------------------
Year divisible by 4 AND
NOT divisible by 100 unless divisible by 400
---------------------------------------------
*/

#include<stdio.h>
int main()
{
    int year;
    printf("Please enter year: ");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
    return 0;
}