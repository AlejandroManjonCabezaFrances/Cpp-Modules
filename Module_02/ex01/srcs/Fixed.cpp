/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:42:42 by amanjon-          #+#    #+#             */
/*   Updated: 2024/07/22 02:29:27 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// Constructors
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int _number)
{
    this->number = _number;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float _num)
{
    this->num = _num;
    std::cout << "Float constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& constrCopy)
{
    std::cout << "Copy contructor called" << std::endl;
}

// Assigned operator
Fixed& Fixed::operator=(const Fixed& constrCopy)
{
    std::cout << "Copy assigned operator called" << std::endl;
    if (this != &constrCopy)
        this->fixedPoint = constrCopy.fixedPoint;
    return (*this);
}