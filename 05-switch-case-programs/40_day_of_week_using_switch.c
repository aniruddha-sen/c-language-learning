/*
Program: Day of Week Using Switch-Case
Author: Aniruddha Sen
Day: 10
Description:
This program takes a number from 1 to 7 as input and displays
the corresponding day of the week using a switch-case statement.

Day Mapping:
---------------------------------------
Choice              | Day
---------------------------------------
1                   | Monday
2                   | Tuesday
3                   | Wednesday
4                   | Thursday
5                   | Friday
6                   | Saturday
7                   | Sunday
---------------------------------------
*/

#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday\n");
            break;

        case 2:
            printf("Tuesday\n");
            break;

        case 3:
            printf("Wednesday\n");
            break;

        case 4:
            printf("Thursday\n");
            break;

        case 5:
            printf("Friday\n");
            break;

        case 6:
            printf("Saturday\n");
            break;

        case 7:
            printf("Sunday\n");
            break;

        default:
            printf("Invalid day number.\n");
    }

    return 0;
}