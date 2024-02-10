//write include statement for if header
#include "if.h"

bool get_and_result(bool bool1, bool bool2)
{
    auto result = bool1 && bool2;
    return result;
}

bool get_or_result(bool bool1, bool bool2)
{
    return bool1 || bool2;
}

bool get_not_result(bool bool1)
{
    return !bool1;
}

bool is_even(int num)
{
    auto remainder = num % 2;
    return remainder == 0;
}

bool is_odd(int num)
{
    auto remainder = num % 2;
    return remainder;
}

bool is_vowel(char ch)
{
    auto result = ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    return result;
}


//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise


