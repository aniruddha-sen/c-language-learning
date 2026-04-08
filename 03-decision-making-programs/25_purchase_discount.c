/*
Program: Purchase Discount Calculator
Author: Aniruddha Sen
Day: 7
Description:
Calculates discount amount and final payable amount based on purchase amount.

Discount Slab:
---------------------------------------
Purchase Amount      | Discount
---------------------------------------
Up to 10000          | 10%
10001 - 20000        | 15%
20001 - 30000        | 20%
Above 30000          | 25%
---------------------------------------
*/

#include<stdio.h>
int main() 
{
    float amount,discount=0,finalAmount;
    printf("Please enter purchase amount: ");
    scanf("%f",&amount);
    if(amount<=10000)
    {
        discount=amount*0.10;
    }
    else if(amount<=20000)
    {
        discount=amount*0.15;
    }
    else if(amount<=30000)
    {
        discount=amount*0.20;
    }
    else
    {
        discount=amount*0.25;
    }
    finalAmount=amount-discount;
    printf("Discount: %.2f\n",discount);
    printf("Final Amount: %.2f\n",finalAmount);
    return 0;
}