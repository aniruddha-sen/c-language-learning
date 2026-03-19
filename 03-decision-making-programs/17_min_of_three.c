/* 
Program: Minimum of Three Numbers
Author: Aniruddha Sen
Day: 4
Description:
This program takes three numbers as input and displays the minimum number among them.
*/

#include<stdio.h>
int main() 
{
    int a,b,c;
    printf("Please enter first number: ");
    scanf("%d",&a);
    printf("Please enter second number: ");
    scanf("%d",&b);
    printf("Please enter third number: ");
    scanf("%d",&c);
    if (a<=b && a<=c) 
    {
        printf("Minimum number is: %d\n", a);
    } 
    else if (b<=a && b<=c) 
    {
        printf("Minimum number is: %d\n", b);
    } 
    else 
    {
        printf("Minimum number is: %d\n", c);
    }
    return 0;
}