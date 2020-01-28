//Write the include statement for types.h here
#include "types.h"

#include <iostream>
//Write include for capturing input from keyboard and displaying output to screen



int main() 
{
	int iNum1, iNum2; //11- 19 implemented by mmacigewski, pushed by garrows69(wrong account)
	std::cin >> iNum1;

	std::cout << "Input number 1: ";  
	std::cout << "Input number 2: ";  
	std::cin >> iNum2;

	std::cout << "\nSum of numbers: " << sum_numbers(iNum1, iNum2) << std::endl;
	std::cout << "Product of numbers: " << multiply_numbers(iNum1, iNum2) << std::endl;

	return 0;
}

