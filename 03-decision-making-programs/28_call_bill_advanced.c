/*
Program: Telephone Billing System (With Fixed Charge)
Author: Aniruddha Sen
Day: 7
Description:
Calculates total monthly telephone bill including slab rates and fixed charge.

Tariff:
---------------------------------------
Calls               | Rate
---------------------------------------
Up to 50            | Free
Next 100            | ₹1 per call
Next 200            | ₹1.10 per call
Beyond 350          | ₹1.20 per call
---------------------------------------
Fixed Monthly Charge: ₹180
---------------------------------------
*/

#include<stdio.h>
int main() 
{
    int calls;
    float bill=180;
    printf("Please enter number of calls: ");
    scanf("%d",&calls);
    if(calls<=50)
    {
        bill+=0;
    }
    else if(calls<=150)
    {
        bill+=(calls-50)*1;
    }
    else if(calls<=350)
    {
        bill+=(100*1)+(calls-150)*1.10;
    }
    else
    {
        bill+=(100*1)+(200*1.10)+(calls-350)*1.20;
    }
    printf("Total Monthly Bill: ₹%.2f\n",bill);
    return 0;
}