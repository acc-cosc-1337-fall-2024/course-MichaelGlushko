#include "func.h"
#include <iostream>

using std::cin;
using std::cout;
int main() 
{
	int choice;
	string dna;

	do
	{
		cout<<"\n\n1- Get GC Content\n2- Get DNA Complement\n3- Exit\n";
		cin>>choice;

		if (choice == 1) 
		{
			cout<<"\nPlease enter DNA string: ";
			cin>>dna;

			cout<<"Result: "<<get_gc_content(dna);
		}
		else if (choice == 2)
		{
			cout<<"\nPlease enter DNA string: ";
			cin>>dna;

			cout<<"Result: "<<get_dna_complement(dna);
		}
	} while(choice != 3);

	return 0;
}
