//write include statement for switch header
#include "switch.h"

//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise

string sMenu(int iNum)
{
	string sResult;

	switch (iNum)
	{
	case 1:
		sResult = "Option 1";
		break;
	case 2:
		sResult = "Option 2";
		break;
	case 3:
		sResult = "Option 3";
		break;
	case 4:
		sResult = "Option 4";
		break;
	case 10000:
		sResult = "ITS OVER 9000!!!";
		break;
	default:
		sResult = "Invalid Option";
	}

	return sResult;
}