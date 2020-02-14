#include<iostream>

using std::cout;

int main() 
{
	int num = 5;

	cout << "Value of num is: " << num << " Address is " << &num; //& POINTS TO ADDRESS

	int &num_ref = num; //THIS SAYS SAVE ADDRESS OF NUM TO THAT REFERENCE VARIABLE, ALLOWS US TO CHANGE THE VALUE OF NUM
	num_ref = 10; //this changes value of the varibale num because it assigning 10 to the memory address

	cout << "\nValue of num is: " << num << " Address is " << &num; //& POINTS TO ADDRESS

	return 0;
}