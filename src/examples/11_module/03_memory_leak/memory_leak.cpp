#include "memory_leak.h"

void memory_leak()
{
	int* ptr_num = new int(5);
	//other code

	//no delete causes a memory leak, so every time it is called, it takes up more and more memory
}