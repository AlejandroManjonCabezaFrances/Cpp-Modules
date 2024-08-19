/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 08:16:02 by amanjon-          #+#    #+#             */
/*   Updated: 2024/08/19 13:14:13 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	/* std::cout << "1" << std::endl; */
	this->number = 0;
}

Fixed::~Fixed()
{
	/* std::cout << "6" << std::endl; */
}

Fixed::Fixed(const int _num)
{
	/* std::cout << "2" << std::endl; */
	this->number = /* roundf */(_num << bit);
}

Fixed::Fixed(const float _num)
{
	/* std::cout << "3" << std::endl; */
	this->number = roundf(_num * (1 << bit));
}

// Copy constructor
Fixed::Fixed(const Fixed& constrCopy)
{
	/* std::cout << "4" << std::endl; */
	this->number = constrCopy.number;
}

// Assigned operator
Fixed& Fixed::operator=(const Fixed& constrCopy)
{
	/* std::cout << "5" << std::endl; */
	if (this != &constrCopy)
		this->number = constrCopy.number;
	return (*this);
}

int Fixed::getNumber()
{
	/* std::cout << "7" << std::endl; */
	return(this->number);
}

/**
 * Convierte un número en punto fijo a su equivalente en
un número entero, eliminando la parte fraccional. 
La expresión 1 << 8 significa "desplazar el bit 1 a la izquierda 8 posiciones", lo cual es equivalente a multiplicar 1 por 282^828 (256). Aquí está el desglose:
1 en binario es 0000 0001.
Desplazar 8 posiciones a la izquierda: 1 << 8 = 0000 0001 0000 0000 = 256 en decimal = 2 elevado a 8.
*/
int Fixed::toInt() const
{
	/* std::cout << "8" << std::endl; */
	return (this->number) / (int(1 << bit));
}

/**
 * Convierte un número en punto fijo a un número en coma flotante
float(1 << 8) convierte el número entero 256 a un número de coma flotante 256.0.
La división (float(this->number) / (float(1 << 8))) ajusta el valor entero para obtener su representación fraccional en coma flotante. 
*/
float Fixed::toFloat() const
{
	/* std::cout << "9" << std::endl; */
	return (float(this->number) / (float(1 << bit)));
}

bool Fixed::operator>(const Fixed& other)
{
	return (this->number > other.number);
}

bool Fixed::operator<(const Fixed& other)
{
	return (this->number < other.number);
}

bool Fixed::operator>=(const Fixed& other)
{
	return (this->number >= other.number);
}

bool Fixed::operator<=(const Fixed& other)
{
	return (this->number <= other.number);
}

bool Fixed::operator==(const Fixed& other)
{
	return (this->number == other.number);
}

bool Fixed::operator!=(const Fixed& other)
{
	return (this->number != other.number);
}

Fixed& Fixed::operator+(const Fixed& other)
{
	this->number += other.number;
	return (*this);
}

Fixed& Fixed::operator-(const Fixed& other)
{
	this->number -= other.number;
	return (*this);
}

Fixed& Fixed::operator*(const Fixed& other)
{
	this->number *= other.number;
	this->number = this->toFloat();
	return (*this);
}

Fixed& Fixed::operator/(const Fixed& other)
{
	this->number /= other.number;
	return (*this);
}

// Pre +
Fixed& Fixed::operator++()
{
	++this->number;
	return (*this);
}

//Post +
Fixed Fixed::operator++(int)
{
	Fixed copy;

	copy = *this;
	this->number++;
	return (copy);
}

//Pre -
Fixed& Fixed::operator--()
{
	--this->number;
	return (*this);
}

//Post -
Fixed Fixed::operator--(int)
{
	Fixed copy;

	copy = *this;
	return (copy);
}

// Ternaries comparative
Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	return (first.number < second.number ? first : second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
	std::cout << "función max() devuelve referencia" << std::endl;
	return (first.number > second.number ? first : second);
}

Fixed Fixed::min(const Fixed& first, const Fixed& second)
{
	return (first.number < second.number ? first : second);
}

Fixed Fixed::max(const Fixed& first, const Fixed& second)
{
	/* second.number = round(second.number * 100) / 100.0; */
	return (first.number > second.number ? first : second);
}

std::ostream& operator<<(std::ostream &output, const Fixed& constrCopy)
{
	output << constrCopy.toFloat();
	return (output);
}
