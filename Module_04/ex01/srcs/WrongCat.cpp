#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << GREEN << "The WrongCat leaves its cave" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& constrCopy) : WrongAnimal()
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
	std::cout << RED << "Bye bye WrongCat class" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Makes a terrifying noise: MiaUUU MiuaHHHHHrG !!! " << std::endl;
}

