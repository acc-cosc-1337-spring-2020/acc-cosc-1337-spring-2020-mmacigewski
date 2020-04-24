//
//TODO 7 add template
#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include <cstddef> //size_t datatype
#include <stddef.h>
#include <iostream>

class Vector
{
public:

	//Rule of 3, anytime you have a class with dynamic memory you gotta do it youtself

	Vector(size_t sz);
	Vector(const Vector& v); //copy constructor, makes it to where it cant be changed. Rule of 3

	size_t Size() const { return size; }

	Vector& operator=(const Vector& v); //this is for overloading, so v2 = v1 doesn't break it, Rule of 3
	int& operator[](int i) { return nums[i]; } //allows us to say v[1] = 3. It edits num
	int& operator[](int i)const { return nums[i]; }

	~Vector(); //destructor(deallocates memory) Rule of 3

protected:



private:

	size_t size;
	int* nums;

};


#endif // !MY_VECTOR_H


//from here down, does not belong to class. simply free functions


void use_vector();