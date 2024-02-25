//add include statements
#include "repetition.h"
#include<iostream>

//add function(s) code here

int factorial(int num) 
{
    int sum = 1;

    for (int i = 1; i <= num; i++) 
    {
        sum = i * sum;
    }
    
    return sum;
}

int gcd(int num1, int num2)
{
    int t;
    while (num1 != num2)
    {
        if (num1 < num2)
        {
            t = num1;
            num1 = num2;
            num2 = t;
        }
        else if (num1 > num2)
        {
            num1 -= num2;
        }
    }
    return num1;
}