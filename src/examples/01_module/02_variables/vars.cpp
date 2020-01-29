//cpp

#include "vars.h"
#include <iostream>

using std::cout;

void display_number(int num)
{
	cout << num << "\n"; //std::endl flushes memory constantly
}

int square_number(int num)
{
	return num * num;
}