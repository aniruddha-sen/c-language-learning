/*
Program: Angle Type Classifier
Author: Aniruddha Sen
Day: 5
Description:
This program takes an angle as input and classifies it as Acute, Right, 
Obtuse, Straight, Reflex, or Complete angle. It also handles invalid inputs.
*/

#include<stdio.h>
int main() 
{
    int angle;
    printf("Please enter an angle (in degrees): ");
    scanf("%d",&angle);
    if(angle<0) 
    {
        printf("Negative angles are not categorized.\n");
    } 
    else if(angle==0) 
    {
        printf("Zero Angle\n");
    } 
    else if(angle>0 && angle<90) 
    {
        printf("Acute Angle\n");
    } 
    else if(angle==90) 
    {
        printf("Right Angle\n");
    } 
    else if(angle>90 && angle<180) 
    {
        printf("Obtuse Angle\n");
    } 
    else if(angle==180) 
    {
        printf("Straight Angle\n");
    } 
    else if(angle>180 && angle<360) 
    {
        printf("Reflex Angle\n");
    } 
    else if(angle==360) 
    {
        printf("Complete Angle\n");
    } 
    else 
    {
        printf("The value %d exceeds a full rotation.\n", angle);
        printf("Please enter an angle between 0 and 360.\n");
    }
    return 0;
}