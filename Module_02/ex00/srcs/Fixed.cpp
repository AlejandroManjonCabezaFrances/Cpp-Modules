/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:54:54 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/07 12:39:25 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

// Copy constructor
Fixed::Fixed(const Fixed& constrCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = constrCopy.fixedPoint;
}

// Copy assignment operator copy/overload
Fixed& Fixed::operator=(const Fixed& constrCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &constrCopy)
		this->fixedPoint = constrCopy.fixedPoint;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}
