#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	auto result = false;
	auto ch = 'a';

	cout<<"Enter a letter: ";
	cin>>ch;

	result = is_vowel(ch);
	 
	 if(result)
	 {
		cout<<ch<<" is a vowel\n";
	 }

	 cout<<result<<"\n";

	 return 0;
	//create a bool variable named even
	//create an int variable named value

	//prompt user for a keyboard number
	//assign the number to the value variable

	//call the is_even function with value as its argument
	//and assign its return value to the even variable
	

	//display even if number is even


	return 0;
}
