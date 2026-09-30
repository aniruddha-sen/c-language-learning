/*
Program: Electricity Bill Calculator Using Ternary Operator
Author: Aniruddha Sen
Day: 9
Description:
This program takes the number of electricity units consumed
and calculates the electricity charge using a nested ternary operator.

Electricity Charges:
------------------------------------------------------------
Units Consumed       | Charge
------------------------------------------------------------
0 - 200              | ₹0.50 per unit
201 - 400            | ₹100 + ₹0.65 per unit above 200
401 - 600            | ₹230 + ₹0.80 per unit above 400
Above 600            | ₹390 + ₹1.00 per unit above 600
------------------------------------------------------------

Note:
On Windows, UTF-8 encoding is enabled to correctly display the ₹ symbol.
Remove windows.h and related code for Mac/Linux systems.
*/

#include <stdio.h>
#include <windows.h>   // Remove this line if using Mac/Linux

int main()
{
    int units;
    float charge;

    // Enable UTF-8 encoding for ₹ symbol (Windows only)
    SetConsoleOutputCP(CP_UTF8);

    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    charge = (units <= 200) ? (units * 0.50) :
             (units <= 400) ? (100 + (units - 200) * 0.65) :
             (units <= 600) ? (230 + (units - 400) * 0.80) :
                              (390 + (units - 600) * 1.00);

    printf("Electricity Charge: \u20B9%.2f\n", charge);

    return 0;
}