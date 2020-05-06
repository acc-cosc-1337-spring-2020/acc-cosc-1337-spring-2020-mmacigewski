#include "vector.h"

#include <vector>
#include<iostream>

int main() 
{

	std::vector<int> int_n;
	std::vector<double> double_n;

	Vector v1;

	std::vector<int> v;
	v.capacity(); //how many addresses can we add to this vector?
	v.reserve(3); //copies a new vector with the old elements and will add 3 spaces onto it
	v.resize(3); //grows the vector or shrinks

	use_vector();

	return 0;
}

