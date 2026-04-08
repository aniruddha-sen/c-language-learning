/*
Program: Employee DA Calculator
Author: Aniruddha Sen
Day: 7
Description:
Calculates Dearness Allowance (DA) and total salary based on basic salary.

DA Slab:
---------------------------------------
Basic Amount         | DA %
---------------------------------------
Up to 5000           | 5%
5001 - 10000         | 10%
10001 - 15000        | 15%
Above 15000          | 20%
---------------------------------------
*/

#include<stdio.h>
int main() 
{
    float basic,da=0,total;
    printf("Please enter basic salary: ");
    scanf("%f",&basic);
    if(basic<=5000)
    {
        da=basic*0.05;
    }
    else if(basic<=10000)
    {
        da=basic*0.10;
    }  
    else if(basic<=15000)
    {
        da=basic*0.15;
    }
    else
    {
        da=basic*0.20;
    }
    total=basic+da;
    printf("DA Amount: %.2f\n",da);
    printf("Total Salary: %.2f\n",total);
    return 0;
}