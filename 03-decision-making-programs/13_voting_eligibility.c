/* 
Program: Voting Eligibility Checker
Author: Aniruddha Sen
Day: 4
Description:
This program takes the age of a person as input and checks whether the person is eligible to vote or not.
*/

#include<stdio.h>
int main()
{
    int age;
    printf("Please enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible for voting.\n");
    }
    else 
    {
        printf("Not eligible for voting.\n");
    }
    return 0;
}