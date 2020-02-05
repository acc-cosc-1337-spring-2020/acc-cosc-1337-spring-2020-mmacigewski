#include "output.h"//use the header

#include <string>
#include <iostream>//standard library

using std::cout; //DO THIS IF YOU WILL USE IT ALOT
using std::string; //how industry does it

int main() 
{
	string world = "Hello";

	cout << "Hello World!\n";

	int n1 = 5, n2 = 10;

	if (n1 <= n2 && n1 > 5)
	{
		cout << "Hello World from if";
	}

	if (!(6 >= n1 && 6 <= 2))
	{
		std::cout << "Out of range";
	}

	cout << world << std::endl;

	cout << iReturnValue();

	return 0;
}