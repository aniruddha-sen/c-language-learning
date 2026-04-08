/*
Program: Call Billing System (Basic Slab)
Author: Aniruddha Sen
Day: 7
Description:
Calculates total call bill based on slab-wise rates.

Call Charges:
---------------------------------------
No. of Calls        | Rate per Call
---------------------------------------
First 100 calls     | ₹2
Next 200 calls      | ₹3
Above 300 calls     | ₹5
---------------------------------------
*/

#include<stdio.h>
#include<windows.h>   // Delete this line if using Mac or Linux
int main() 
{
    int calls;
    float bill=0;
    // Delete the line below if using Mac or Linux (they support UTF-8 by default)
    SetConsoleOutputCP(CP_UTF8);
    printf("Please enter number of calls: ");
    scanf("%d",&calls);
    if(calls<=100)
    {
        bill=calls*2;
    }
    else if(calls<=300)
    {
        bill=(100*2)+(calls-100)*3;
    }
    else
    {
        bill=(100*2)+(200*3)+(calls-300)*5;
    }
    printf("Total Bill: \u20B9%.2f\n",bill);
    return 0;
}