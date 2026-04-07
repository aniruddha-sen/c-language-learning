/*
Program: Second Greatest Among Three Numbers
Author: Aniruddha Sen
Day: 6
Description:
This program takes three unequal numbers as input and displays 
the second greatest number among them.
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
    if((a>b && a<c) || (a>c && a<b)) 
    {
        printf("Second greatest number is: %d\n",a);
    } 
    else if((b>a && b<c) || (b>c && b<a)) 
    {
        printf("Second greatest number is: %d\n",b);
    } 
    else 
    {
        printf("Second greatest number is: %d\n",c);
    }
    return 0;
}