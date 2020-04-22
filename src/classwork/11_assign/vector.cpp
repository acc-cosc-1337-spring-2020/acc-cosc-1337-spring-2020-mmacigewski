#include "vector.h"
/*
Initialize nums to size array.
Initalize each element to 0;
*/
Vector::Vector(size_t sz)
	: size{ sz }, nums{new int[sz]}  //tells the constructor that you want size initialized to sz, and then nums to some array of sz(allocates 3 addresses)
{
	for (size_t i = 0; i < sz; ++i) //will populate nums
	{
		nums[i] = 0;
	}
}
/*
 Want to copy v.size to new class
 Create new dynamic memory array
 Initialize array elements to the v.nums array values
*/
Vector::Vector(const Vector& v)
	: size{v.size}, nums{new int[v.size]} 
//size{v.size} sets the new class to the size of the old one, and then creates a array of the same size
//you want it to be const so it doesn't just reference, it copies
{
	//fills the new array with the other class stuff
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i]; //
	}
}
