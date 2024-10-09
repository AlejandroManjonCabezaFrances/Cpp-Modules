/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:42:42 by amanjon-          #+#    #+#             */
/*   Updated: 2024/10/09 12:00:03 by amanjon-         ###   ########.fr       */
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

// Constructor recoge número entero y lo convierte a punto fijo
Fixed::Fixed(const int _num)
{
	this->number = (_num << bit);
	std::cout << "Int constructor called" << std::endl;
}

// Constructor recoge número de punto flotante y lo convierte a punto fijo
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

int Fixed::getRawBits()
{
	return(this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

/* Convierte un número en punto fijo a un número entero, eliminando la parte fraccional. 
La expresión 1 << 8 significa "desplazar el bit 1 a la izquierda 8 posiciones", lo cual es equivalente a multiplicar 1 por 282^828 (256). Aquí está el desglose:
1 en binario es 0000 0001.
Desplazar 8 posiciones a la izquierda: 1 << 8 = 0000 0001 0000 0000 = 256 en decimal = 2 elevado a 8.*/
int Fixed::toInt() const
{
	return ((this->number)) / int(1 << bit);
}

/* Convierte un número en punto fijo a un número en punto flotante
float(1 << 8) convierte el número entero 256 a un número de coma flotante 256.0.
La división (float(this->number) / (float(1 << 8))) ajusta el valor entero para obtener su representación fraccional en coma flotante. */
float Fixed::toFloat() const
{
	return (float(this->number) / (float(1 << bit)));
}

std::ostream& operator<<(std::ostream &output, const Fixed& constrCopy)
{
	output << constrCopy.toFloat();
	return (output);
}