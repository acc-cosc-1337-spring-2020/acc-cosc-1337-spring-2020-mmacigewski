#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int r = 0, p = 0;
	int* ref_r = &r;


	cout << "Address of r: " << &r;
	cout << "\nValue of r: " << r;
	cout << "\nAddress of ref_r: " << &ref_r << "\n\n"; //& gets the memory address instead of value, instead if you printed ref_r it would print value

	int* ptr_p = &p;

	cout << "Address of p: " << &p;
	cout << "\nValue of p: " << p;
	cout << "\nAddress of ptr_p p: " << &ptr_p;
	
	cout << "\n\nContents(address) of ptr_p: " << ptr_p << "\n";
	cout << "Value ptr_p points to: " << *ptr_p; //will give us the value of ptr_p

	*ptr_p = 15; //modifies value of p
	cout << "Address of p: " << ptr_p;
	cout << "Value of p: " << &ptr_p;

	//int* ptr = 5; this wil not work, due to pointers needing address

	return 0;
}