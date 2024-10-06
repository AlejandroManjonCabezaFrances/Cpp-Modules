/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:58:22 by amanjon           #+#    #+#             */
/*   Updated: 2024/10/06 18:58:25 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

