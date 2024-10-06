#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << BLUE << "The WrongAnimals leaves its cave" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& constrCopy)
{
	(void)constrCopy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& constrCopy)
{
	if (this != &constrCopy)
	{
		(void)constrCopy;
	}

	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << INDIGO << "Bye bye WrongAnimal class" << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: Makes a terrifying noise: aHHHHHrGGGGGGG !!! " << std::endl;
}

