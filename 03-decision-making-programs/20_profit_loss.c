/*
Program: Profit or Loss Calculator
Author: Aniruddha Sen
Day: 5
Description:
This program takes cost price and selling price as input and calculates 
whether there is a profit or loss, and displays the amount.
*/

#include<stdio.h>
int main() 
{
    float costPrice,sellingPrice;
    printf("Please enter the Cost Price: ");
    scanf("%f",&costPrice);
    printf("Please enter the Selling Price: ");
    scanf("%f",&sellingPrice);
    if(sellingPrice>costPrice) 
    {
        printf("Profit: %.2f",sellingPrice-costPrice);
    } 
    else if(costPrice>sellingPrice) 
    {
        printf("Loss: %.2f",costPrice-sellingPrice);
    } 
    else 
    {
        printf("No Profit, No Loss");
    }
    return 0;
}