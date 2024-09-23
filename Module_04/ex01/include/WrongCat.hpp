#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

#include <iostream>
#include <iomanip>

// Whitout Polimorfism / multi- inheritance, just inheritance

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& constrCopy);
		WrongCat& operator=(const WrongCat& constrCopy);
		~WrongCat();

		void makeSound() const;
};

#endif
