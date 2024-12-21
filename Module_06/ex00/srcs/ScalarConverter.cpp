/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:50:39 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/21 20:25:37 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << GREEN << " Default constructor ScalarConverter" << RESET << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& constrCopy)
{
	std::cout << GREEN << " Default constructor copy ScalarConverter" << RESET << std::endl;
	*this = constrCopy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& constrCopy)
{
	(void)constrCopy;
	std::cout << GREEN << " Default assignment operator ScalarConverter" << RESET << std::endl;

	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << RED << " Default destructor ScalarConverter" << RESET << std::endl;

}

void	isNumber(std::string& input)
{
	int 	integer = atoi(input.c_str());
	
	if (integer != -1)
	{
		std::cout << "char: Non displayable " << std::endl;
		std::cout << "int: " << integer << std::endl;
		std::cout << "float: " << static_cast<float>(integer) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(integer) << ".0" << std::endl;
	}
	else
		std::cout << "Your number is probably bigger than an INT: " <<  std::endl;
}

/**
 * c++11: "generador de -Not a Number- o -Infinito-"
 *	- float pseudoFloat = std::numeric_limits<float>::quiet_NaN();
 *	- float pseudoDouble = std::numeric_limits<double>::quiet_NaN();
 *	- pseudoFloat = std::numeric_limits<float>::infinity();
 *	- pseudoDouble = std::numeric_limits<double>::infinity();
*/

void	pseudoLiteral(std::string& input)
{
	
	if (input == "nanf" || input == "nan")
	{
		float pseudoFloat = 0.0f / 0.0f;
		float pseudoDouble = 0.0 / 0.0;

		pseudoFloat *= -1;
		pseudoDouble *= -1;

		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << pseudoFloat << "f" << std::endl;
		std::cout << "double: " << pseudoDouble << std::endl;
	}
	else if (input == "inff" || input == "inf" || input == "+inff" || input == "+inf")
	{
		float pseudoFloat = 1.0f / 0.0f;
		float pseudoDouble = 1.0 / 0.0;

		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << pseudoFloat << "f" << std::endl;
		std::cout << "double: " << pseudoDouble << std::endl;
		
	}
	else if (input == "-inff" || input == "-inf")
	{
		float pseudoFloat = -1.0f / 0.0f;
		float pseudoDouble = -1.0 / 0.0;

		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << pseudoFloat << "f" << std::endl;
		std::cout << "double: " << pseudoDouble << std::endl;
		
	}
}

/**
 * tipo char: 'c', 'a', ...
 * tipo int: 0, -42, 42, ...
 * tipo float: 0.0f, -4.2f, 4.2f, ...
 * pseudo literales (por ciencia, ya sabes): -inff, +inff y nanf.
 * tipo double: 0.0, -4.2, 4.2, ...
 * pseudo literales (por diversión): -inf, +inf y nan.
*/
void	isChar(std::string& input)
{
	char	c;

	c = input[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	
}

void  ScalarConverter::convert(std::string& input)
{
	if (std::isalpha(input[0]) && input.size() == 1)
		isChar(input);
	else if (input == "inff" || input == "+inff" || input == "-inff" || input == "nanf"
			|| input == "inf"|| input == "+inf" || input == "-inf" || input == "nan")
				pseudoLiteral(input);
	else if (std::isdigit(input[0]))
		isNumber(input);
}