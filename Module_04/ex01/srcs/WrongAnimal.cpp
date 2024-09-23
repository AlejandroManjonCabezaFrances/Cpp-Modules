#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "The WrongAnimals leaves its cave" << std::endl;
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
	std::cout << "Bye bye WrongAnimal class" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: Makes a terrifying noise: aHHHHHrGGGGGGG !!! " << std::endl;
}

