//write include statement for if header
#include "if.h"


//write code for the is_even function that returns true if num is even, false otherwise

bool bIsEven(int num)
{
	return num % 2 == 0 ? true : false;
}

//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise


bool bOvertime(double num)
{
	return num > 40 ? true : false;
}
