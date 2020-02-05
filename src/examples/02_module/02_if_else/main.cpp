//write include statements
#include "if_else.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;

/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main() 
{
	int year = 0;
	string result;

	cout << "Input year: ";
	cin >> year;

	result = sGetGeneration(year);

	cout << "The year " << year << " falls within the " << result << " Generation";
	
	return 0;
}