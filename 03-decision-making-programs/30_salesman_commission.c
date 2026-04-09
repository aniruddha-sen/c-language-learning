/*
Program: Salesman Commission Calculator
Author: Aniruddha Sen
Day: 8
Description:
Calculates commission based on number of products sold.

Commission Structure:
---------------------------------------------
No. of Products     | Commission
---------------------------------------------
Less than 40        | ₹3 per product + 100
Equal to 40         | ₹4 per product + 50
More than 40        | ₹5 per product + 150
---------------------------------------------
*/

#include<stdio.h>
#include<windows.h>   // Delete this line if using Mac or Linux
int main()
{
    int products;
    float commission;
    // Delete the line below if using Mac or Linux (they support UTF-8 by default)
    SetConsoleOutputCP(CP_UTF8);
    printf("Please enter number of products sold: ");
    scanf("%d",&products);
    if(products<40)
    {
        commission=(products*3)+100;
    }
    else if(products==40)
    {
        commission=(products*4)+50;
    }
    else
    {
        commission=(products*5)+150;
    }
    printf("Commission: \u20B9%.2f\n",commission);
    return 0;
}