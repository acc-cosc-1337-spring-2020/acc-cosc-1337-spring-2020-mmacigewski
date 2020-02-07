#include <iostream>
#include "switch.h"

using std::cout;

int main() 
{
	int iNum;

	cout << "Enter a num(1-4): ";
	std::cin >> iNum;

	cout << "Your number "<< iNum << " fell within " << sMenu(iNum);

	return 0;
}