#include<string>
#include<iostream>
#include "for_ranged.h"

int main() 
{
	auto name = "john"; //The auto keyword automatically detects what the variable is
	auto num = 5; //auto detects that it is a int
	auto num1 = 5.5; //auto detects that it is a double
	std::string str = "max";

	loop_string_w_index(str);

	loop_string_w_auto(name);

	return 0;
}