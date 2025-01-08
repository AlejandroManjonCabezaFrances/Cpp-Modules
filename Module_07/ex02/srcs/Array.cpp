#include "../include/Array.hpp"

Array::Array()
{
	/* int arr[] = {};  */
}

/* Array::Array(unsigned int n)
{
	int arr[n] = {}; 
	int* a = new int();
	std::cout << "*a = " << *a << std::endl;
} */

Array::Array(const Array& constrCopy)
{	
	*this = constrCopy;
}

Array& Array::operator=(const Array& constrCopy)
{
	if (this != &constrCopy)
	{
*this = constrCopy;
	}

	return (*this);
}

Array::~Array()
{
}
