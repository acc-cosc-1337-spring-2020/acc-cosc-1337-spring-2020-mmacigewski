//
//TODO 7 add template
#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include <cstddef> //size_t datatype
#include <stddef.h>
#include <iostream>

//This makes it a template class, it will allow multipe data types
template<typename T> //this vector class will now support t(can be int, double, class)

class Vector
{
public:

	//Rule of 3, anytime you have a class with dynamic memory you gotta do it youtself

	Vector();

	Vector(size_t sz);
	Vector(const Vector<T>& v); //copy constructor, makes it to where it cant be changed. Rule of 3

	size_t Size() const { return size; }

	Vector<T>& operator=(const Vector& v); //this is for overloading, so v2 = v1 doesn't break it, Rule of 3
	T& operator[](int i) { return nums[i]; } //allows us to say v[1] = 3. It edits num
	T& operator[](int i)const { return nums[i]; } //returns the chosen data type

	size_t Capacity() const { return space; }

	void Reseve(size_t new_allocation);

	void Resize(size_t new_size);

	void Push_back(T value);

	~Vector(); //destructor(deallocates memory) Rule of 3

protected:



private:

	size_t size;
	size_t space{ 0 };
	T* nums;

	const int RESERVED{ 8 };
	const int DOUBLE{ 2 };
};


#endif // !MY_VECTOR_H


//from here down, does not belong to class. simply free functions


void use_vector();