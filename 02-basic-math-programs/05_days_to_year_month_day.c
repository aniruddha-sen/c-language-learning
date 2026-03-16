/*
Program: Days to Year, Month, Day
Author: Aniruddha Sen
Day: 2
Description:
This program converts a given number of days into years, months, and days.
*/

#include<stdio.h>
int main()
{
    int days,years,months,remaining_days;
    printf("Please enter the number of days: ");
    scanf("%d",&days);
    years=days/365;
    months=(days%365)/30;
    remaining_days=(days%365)%30;
    printf("Equivalent time: %d year(s), %d month(s), %d day(s)\n",years,months,remaining_days);
    return 0;
}