/*
Program: Time Conversion
Author: Aniruddha Sen
Day: 3
Description:
This program takes a total number of seconds and displays hours, minutes, and seconds.
*/

#include<stdio.h>
int main() 
{
    int total_seconds,hours,minutes,remaining_seconds;
    printf("Please enter the total number of seconds: ");
    scanf("%d",&total_seconds);
    hours=total_seconds/3600;
    minutes=(total_seconds%3600)/60;
    remaining_seconds=total_seconds%60;
    printf("Equivalent time: %d hour(s), %d minute(s), %d second(s)\n",hours,minutes,remaining_seconds);
    return 0;
}
