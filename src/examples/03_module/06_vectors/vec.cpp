#include "for_ranged.h"
#include<iostream>
#include<vector>
#include "vec.h"

using std::vector;

/*
Write code for function loop_vector_w_index with no parameters.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67
*/
void loop_vector_w_index()
{
	std::vector <int> nums = {};

	nums.push_back(9);
	nums.push_back(10);
	nums.push_back(99);
	nums.push_back(5);
	nums.push_back(67);

	for (auto c : nums)
	{
		std::cout << c;
	}
}



/*
Write code for function loop_vector_w_index with a vector of int pass by value parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67
*/
void loop_vector_w_index_val(std::vector <int> nums)
{
	for (int i = 0; i < nums.size(); ++i)
	{
		std::cout << nums[i] + "\n";
	}
}


/*
Write code for function loop_vector_w_index with a vector of int pass by reference parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows : 9 10 99 5  67
*/
void loop_vector_w_index_ref(std::vector <int> &nums)
{
	for (int i = 0; i < nums.size(); ++i)
	{
		std::cout << nums[i] + "\n";
	}
}

/*
Write code for function loop_vector_w_index with a vector of int const pass by reference parameter.
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows : 9 10 99 5  67
*/

void loop_vector_w_index_ref_const(const std::vector <int> &nums)
{
	for (int i = 0; i < nums.size(); ++i)
	{
		std::cout << nums[i] + "\n";
	}
}
