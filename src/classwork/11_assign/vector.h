//
//TODO 7 add template
#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include <cstddef> //size_t datatype
#include <stddef.h>

class Vector
{
public:

	Vector(size_t sz);
	Vector(const Vector& v); //copy constructor, makes it to where it cant be changed.
	size_t Size() const { return size; }

	int& operator[](int i) { return nums[i]; } //allows us to say v[1] = 3. It edits num
	int& operator[](int i)const { return nums[i]; }

protected:



private:

	size_t size;
	int* nums;

};


#endif // !MY_VECTOR_H
