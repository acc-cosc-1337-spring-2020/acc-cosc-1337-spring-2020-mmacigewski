//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	bool bIsRunning = true;
	int iNum = 0;
	char cOption;

	while (bIsRunning)
	{
		cout << "Input a number: ";
		cin >> iNum;

		cout << "\nYour factorial: " << factorial(iNum);

		cout << "\n\nDo you wish to continue? (y/n)";
		cin >> cOption;

		if (cOption == 'n')
		{
			bIsRunning = false;
			cout << "\nProgram ending";
		}
		std::cout << std::endl; //end line for formatting
	}

	return 0;
}