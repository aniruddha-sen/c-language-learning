/*
Program: Roots of a Quadratic Equation
Author: Aniruddha Sen
Day: 5
Description:
This program takes coefficients a, b, and c as input and calculates the roots 
of a quadratic equation. It determines whether the roots are real and distinct, 
real and equal, or imaginary.
*/

#include<stdio.h>
#include<math.h>
#include<windows.h>   // Delete this line if using Mac or Linux
int main()
{
    float a,b,c,discriminant,root1,root2,root;
    // Delete the line below if using Mac or Linux (they support UTF-8 by default)
    SetConsoleOutputCP(CP_UTF8);
    printf("Quadratic Equation: ax\u00B2 + bx + c = 0\n");
    printf("Here, a, b, and c are the coefficients.\n\n");
    printf("Please enter the value of a: ");
    scanf("%f",&a);
    printf("Please enter the value of b: ");
    scanf("%f",&b);
    printf("Please enter the value of c: ");
    scanf("%f",&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)
    {
        printf("\nThe roots are real and distinct.\n");
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("The roots are: %.2f and %.2f\n",root1,root2);
    }
    else if(discriminant==0)
    {
        printf("\nThe roots are real and equal.\n");
        root=-b/(2*a);
        printf("The root is: %.2f\n",root);
    }
    else
    {
        printf("\nThe roots are imaginary.\n");
    }
    return 0;
}