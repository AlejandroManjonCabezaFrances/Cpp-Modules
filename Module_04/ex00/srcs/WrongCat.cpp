/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:58:40 by amanjon           #+#    #+#             */
/*   Updated: 2024/10/06 18:59:32 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "The WrongCat leaves its cave" << std::endl;
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
	std::cout << "Bye bye WrongCat class" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Makes a terrifying noise: MiaUUU MiuaHHHHHrG !!! " << std::endl;
}

