#include "../include/Array.hpp"

Array::Array()
{
	std::cout << GREEN << " Default constructor Array" << RESET << std::endl;
	/* int arr[] = {};  */
}

/* Array::Array(unsigned int n)
{
	std::cout << GREEN << " parameterized constructor Array" << RESET << std::endl;
	int arr[n] = {}; 
	int* a = new int();
	std::cout << "*a = " << *a << std::endl;
} */

Array::Array(const Array& constrCopy)
{	
	std::cout << GREEN << " Default constructor copy Array" << RESET << std::endl;
	*this = constrCopy;
}

Array& Array::operator=(const Array& constrCopy)
{
	
	if (this != &constrCopy)
	{
		*this = constrCopy;
	}

	std::cout << GREEN << " Default assignment operator Array" << RESET << std::endl;

	return (*this);
}

Array::~Array()
{
	std::cout << RED << " Default destructor Array" << RESET << std::endl;
}
