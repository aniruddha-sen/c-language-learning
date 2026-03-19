/* 
Program: Positive or Negative Number Checker
Author: Aniruddha Sen
Day: 4
Description:
This program takes a number as input and determines whether it is positive or negative.
*/

#include<stdio.h>
int main() 
{
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    if(num >= 0) 
    {
        printf("Positive number.\n");
    } 
    else 
    {
        printf("Negative number.\n");
    }
    return 0;
}