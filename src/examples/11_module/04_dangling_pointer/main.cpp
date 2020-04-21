#include "dangling_pointer.h"
#include <iostream>

int main() 
{
	int* ptr_num = new int(5);
	int* ptr = ptr_num;

	std::cout << *ptr; //The * dereferences it so it will print value

	delete ptr_num; 
	ptr_num = nullptr;

	std::cout << *ptr;

	return 0;
}