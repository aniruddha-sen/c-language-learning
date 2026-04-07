/*
Program: Second Smallest Among Three Numbers
Author: Aniruddha Sen
Day: 6
Description:
This program takes three unequal numbers as input and displays 
the second smallest number among them.
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
    if((a<b && a>c) || (a<c && a>b)) 
    {
        printf("Second smallest number is: %d\n",a);
    } 
    else if((b<a && b>c) || (b<c && b>a)) 
    {
        printf("Second smallest number is: %d\n",b);
    } 
    else 
    {
        printf("Second smallest number is: %d\n",c);
    }
    return 0;
}