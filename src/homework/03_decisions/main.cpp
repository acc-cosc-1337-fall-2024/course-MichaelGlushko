//write include statements
#include<iostream>
#include"decisions.h"

using std::cin;
using std::cout;

int main() 
{
	int menu_input;
	int grade;
	char letter_grade;
	
	cout<<"\n";
	cout<<"     MAIN MENU\n\n1-Letter grade using if\n2-Letter grade using switch\n3-Exit\n";
	cin>>menu_input;
	
	if(menu_input == 1)
	{
		cout<<"Please enter a number between 0 and 100: ";
		cin>>grade;

		letter_grade = get_letter_grade_using_if(grade);
		cout<<letter_grade<<"\n";
		main();
	}
	else if(menu_input == 2)
	{
		cout<<"Please enter a number between 0 and 100: ";
		cin>>grade;

		letter_grade = get_letter_grade_using_switch(grade);
		cout<<letter_grade<<"\n";
		main();
	}
	else if(menu_input == 3)
	{
		cout<<"Exited Program\n";
	}
	else 
	{
		cout<<"Invalid Input\n";
	}
	


	return 0;
}