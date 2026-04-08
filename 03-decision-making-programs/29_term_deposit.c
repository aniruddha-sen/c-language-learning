/*
Program: Term Deposit Maturity Calculator
Author: Aniruddha Sen
Day: 7
Description:
Calculates maturity amount based on principal and time using slab-wise interest rates.

Interest Rates:
---------------------------------------
Time Duration                | Rate
---------------------------------------
Up to 6 months               | 5.00%
6 months to 1 year           | 5.50%
1 year to 2 years            | 7.00%
2 years to 3 years           | 6.50%
Above 3 years                | 6.00%
---------------------------------------

Note:
Interest rates are defined as per the problem specification.
The non-linear structure reflects possible real-world banking strategies,
where rates may vary based on policy, risk factors, and financial planning.
*/

#include<stdio.h>
int main() 
{
    float principal,time,rate,interest,amount;
    printf("Please enter principal amount: ");
    scanf("%f",&principal);
    printf("Please enter time (in years): ");
    scanf("%f",&time);
    if(time<=0.5)
    {
        rate=5.0;
    }
    else if(time<=1)
    {
        rate=5.5;
    }
    else if(time<=2)
    {
        rate=7.0;
    }
    else if(time<=3)
    {
        rate=6.5;
    }
    else
    {
        rate=6.0;
    }
    interest=(principal*rate*time)/100;
    amount=principal+interest;
    printf("Interest: %.2f\n",interest);
    printf("Maturity Amount: %.2f\n",amount);
    return 0;
}