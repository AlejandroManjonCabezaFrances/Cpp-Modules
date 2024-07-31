/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 07:15:02 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/31 08:37:26 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int _num)
{
	this->number = /* roundf */(_num << bit);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float _num)
{
	this->number = roundf(_num * (1 << bit));
	std::cout << "Float constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& constrCopy)
{
	std::cout << "Copy contructor called" << std::endl;
	this->number = constrCopy.number;
}

// Assigned operator
Fixed& Fixed::operator=(const Fixed& constrCopy)
{
	std::cout << "Copy assigned operator called" << std::endl;
	if (this != &constrCopy)
		this->number = constrCopy.number;
	return (*this);
}

std::ostream& operator<<(std::ostream &output, const Fixed& constrCopy)
{
	output << constrCopy./* toFloat() */;
	return (output);
}