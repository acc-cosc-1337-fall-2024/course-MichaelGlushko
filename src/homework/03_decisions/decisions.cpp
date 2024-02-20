//write include statement for decisions header
#include"decisions.h"
#include<iostream>

using std::cout;

//Write code for function(s) code here
int get_letter_grade_using_if(int grade)
{
    char letter_grade;

    if(grade > 89 && grade <= 100)
    {
        letter_grade = 'A';
    }
    else if(grade > 79 && grade < 90)
    {
        letter_grade = 'B';
    }
    else if(grade > 69 && grade < 80)
    {
        letter_grade = 'C';
    }
    else if(grade > 59 && grade < 70)
    {
        letter_grade = 'D';
    }
    else if(grade >= 0 && grade < 60)
    {
        letter_grade = 'F';
    }
    else
    {
        cout<<"Not within a valid range\n";
    }
    return letter_grade;
}

int get_letter_grade_using_switch(int grade)
{
    char letter_grade;

    switch(grade)
    {
        case 0 ... 59:
            letter_grade = 'F';
            break;
        case 60 ... 69:
            letter_grade = 'D';
            break;
        case 70 ... 79:
            letter_grade = 'C';
            break;
        case 80 ... 89:
            letter_grade = 'B';
            break;
        case 90 ... 100:
            letter_grade = 'A';
            break;
        default:
            cout<<"Not within a valid range.\n";   
    }
    return letter_grade;
}
