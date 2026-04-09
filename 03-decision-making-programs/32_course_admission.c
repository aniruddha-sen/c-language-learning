/*
Program: Course Admission Eligibility
Author: Aniruddha Sen
Day: 8
Description:
Determines whether a student is eligible for admission 
based on subject marks and conditions.

Conditions:
---------------------------------------
Maths >= 60
Physics >= 50
Chemistry >= 40
Total >= 200
OR
Maths + Physics >= 150
---------------------------------------
*/

#include<stdio.h>
int main()
{
    int m,p,c,total;
    printf("Please enter marks in Maths: ");
    scanf("%d",&m);
    printf("Please enter marks in Physics: ");
    scanf("%d",&p);
    printf("Please enter marks in Chemistry: ");
    scanf("%d",&c);
    total=m+p+c;
    if((m>=60 && p>=50 && c>=40 && total>=200) || ((m+p)>=150))
    {
        printf("Eligible for admission\n");
    }
    else
    {
        printf("Not eligible for admission\n");
    }
    return 0;
}