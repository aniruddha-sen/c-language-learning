/*
Program: Buzz Number Checker
Author: Aniruddha Sen
Day: 6
Description:
This program checks whether a number is a Buzz number.
A number is a Buzz number if it is divisible by 7 or ends with digit 7.
*/

#include<stdio.h>
int main() 
{
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    if(num%7==0 || num%10==7) 
    {
        printf("%d is a Buzz number\n",num);
    } 
    else 
    {
        printf("%d is not a Buzz number\n",num);
    }
    return 0;
}