#include <iostream>

using std::cout;

/*
Write function prototype for pass_by_val_and_ref with
a value int and ref int parameter.
*/

void pass_by_val_and_ref(int num1, int &num2); //passes in a copy of the first number and the memory address of the second number(from main)

/*
Write function prototype for pass_by_const_ref with
const int reference parameter
*/

void pass_by_const_ref(const int &num); //THIS PASSES THE MEMORY ADDRESS OF NUM 1 BUT IT IS READ ONLY