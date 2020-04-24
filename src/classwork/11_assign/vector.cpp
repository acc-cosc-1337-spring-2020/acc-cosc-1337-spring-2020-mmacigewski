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

/*
Don't know lol
*/

Vector& Vector::operator=(const Vector& v)
{
	int* temp = new int[v.size];

	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i]; //copies values from the vector being copied
	}

	delete nums; //doesn't want v2 leaking memory so it deletes the nums

	nums = temp;
	size = v.size;

	return *this;
}

/*
Release dynamic memory/Deallocate memory
*/

Vector::~Vector()
{
	std::cout << "\nRelease memory\n";

	delete[] nums; //the [] is for arrays
}

//from here below, is free functions

void use_vector()
{
	Vector v2(3); //releases memory because it is a pointer
	Vector* v1 = new Vector(4); //doesn't release memory because it is a pointer. we tell runtime compiler to leave it alone.

	delete v1; //this is needed to make it release memory of v1, this prevents memory leaking
	v1 = nullptr;
}
