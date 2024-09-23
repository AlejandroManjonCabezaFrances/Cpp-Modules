#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "The WrongCat leaves its cave" << std::endl;
}

WrongCat::WrongCat(const WrongCat& constrCopy)
{
	(void)constrCopy;
}

WrongCat& WrongCat::operator=(const WrongCat& constrCopy)
{
	if (this != &constrCopy)
	{
		(void)constrCopy;
	}

	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Bye bye WrongCat class" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Makes a terrifying noise: MiaUUU MiuaHHHHHrG !!! " << std::endl;
}

