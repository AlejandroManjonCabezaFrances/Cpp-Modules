#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Colors.hpp"

#include <iostream>
#include <iomanip>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& constrCopy);
		WrongAnimal& operator=(const WrongAnimal& constrCopy);
		~WrongAnimal();

		void makeSound() const;
};

#endif
