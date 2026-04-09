/*
Program: Executive Net Salary Calculator
Author: Aniruddha Sen
Day: 8
Description:
Calculates net salary of an executive based on level, basic pay,
HRA (25%), perks, and income tax.

Perks Structure:
---------------------------------------------------------
Level   | Perks
        | Conveyance Allowance | Entertainment Allowance
---------------------------------------------------------
1       | 1000                 | 500
2       | 750                  | 200
3       | 500                  | 100
4       | 250                  | -
---------------------------------------------------------

Note:
Gross Salary = Basic Pay + HRA (25% of Basic Pay) + Perks

Income Tax Slab:
---------------------------------------
Gross Salary       | Tax Rate
---------------------------------------
<= 2000            | 0%
2001 - 4000        | 3%
4001 - 5000        | 5%
> 5000             | 8%
---------------------------------------
*/

#include<stdio.h>
int main()
{
    int level;
    float basic,hra,perks=0,gross,tax=0,net;
    printf("Please enter executive level (1-4): ");
    scanf("%d",&level);
    printf("Please enter basic pay: ");
    scanf("%f",&basic);
    hra=basic*0.25;
    if(level==1)
    {
        perks=1000+500;
    }
    else if(level==2)
    {
        perks=750+200;
    }
    else if(level==3)
    {
        perks=500+100;
    }
    else if(level==4)
    {
        perks=250;
    }
    else 
    {
        printf("Invalid level entered.\n");
        return 0;
    }
    gross=basic+hra+perks;
    if(gross<=2000)
    {
        tax=0;
    }
    else if(gross<=4000)
    {
        tax=gross*0.03;
    }
    else if(gross<=5000)
    {
        tax=gross*0.05;
    }
    else
    {
        tax=gross*0.08;
    }
    net=gross-tax;
    printf("Gross Salary: %.2f\n",gross);
    printf("Income Tax: %.2f\n",tax);
    printf("Net Salary: %.2f\n",net);
    return 0;
}