/* 
Program: Even or Odd Checker
Author: Aniruddha Sen
Day: 4
Description:
This program takes a number as input and checks whether it is even or odd.
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    if(num%2==0) 
    {
        printf("Even number.\n");
    } 
    else 
    {
        printf("Odd number.\n");
    }
    return 0;
}