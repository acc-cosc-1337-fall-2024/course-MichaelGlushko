//write include statements
#include<iostream>
#include"hwexpressions.h"

using std::cin;
using std::cout;

//write namespace using statement for cout

int main()
{
	double meal_amount = 0.0;
	double tip_rate = 0.0;
	double total = 0.0;

	cout<<"Enter meal amout: ";
	cin>>meal_amount;
	cout<<"\n";


	double tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter tip rate: ";
	cin>>tip_rate;
	cout<<"\n";

	double tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<"Meal Amount: "<<meal_amount<<"\n";
	cout<<"Sales Tax:   "<<tax_amount<<"\n";
	cout<<"Tip Amount:  "<<tip_amount<<"\n";
	cout<<"Total:       "<<total<<"\n";

	return 0;
}
