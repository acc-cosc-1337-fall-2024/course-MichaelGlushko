//write include statements
#include "repetition.h"
#include <iostream>

using std::cin;
using std::cout;
//write using statements

int main() 
{
	int choice;
	char confirmation;
	int num1;
	int num2;

	do
	{
		cout<<"\n\n1-Factorial\n2-Greatest Common Divisor\n3-Exit\n";
		cin>>choice;

		if (choice == 1) 
		{
			cout<<"\nInput a number: ";
			cin>>num1;

			cout<<"\n"<<factorial(num1);
		}
		else if (choice == 2)
		{
			cout<<"\nInput number 1: ";
			cin>>num1;
			cout<<"\nInput number 2: ";
			cin>>num2;

			cout<<"\n"<<gcd(num1, num2);
		}
		else if (choice == 3)
		{
			cout<<"\nAre you sure you want to exit? (Y/N): ";
			cin>>confirmation;
		}
	} while (confirmation != 'Y');
	

	return 0;
}
