/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:50:39 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/22 19:21:33 by amanjon          ###   ########.fr       */
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

/**
 * Transformo un std::string en un int y luego lo casteo en los diferentes tipos de datos
*/
void	conversionNumber(std::string& input)
{
	int 	integer = atoi(input.c_str());
	
	if (integer != -1 && integer != 0)
	{
		std::cout << "char: " << static_cast<char>(integer) << std::endl;
		std::cout << "int: " << integer << std::endl;
		std::cout << "float: " << static_cast<float>(integer) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(integer) << ".0" << std::endl;
	}
	else if (integer == 0)
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
 * Checkeo que el input, son números
*/
int	isNumber(std::string& input)
{
	std::string::size_type i = 0;
	
	while (i < input.size())
	{
		if (isdigit(input[i]))
			i++;
		else
			return (false);
	}
	return (true);
}

/**
 * c++11: "generador de -Not a Number- o -Infinito-"
 *	- float pseudoFloat = std::numeric_limits<float>::quiet_NaN();
 *	- float pseudoDouble = std::numeric_limits<double>::quiet_NaN();
 *	- pseudoFloat = std::numeric_limits<float>::infinity();
 *	- pseudoDouble = std::numeric_limits<double>::infinity();
 * 
 * Genero un NAN y un INF y lo guardo en un float/double
*/
void	pseudoLiteral(std::string& input)
{
	
	if (input == "nanf" || input == "nan")
	{
		float pseudoFloat = 0.0f / 0.0f;
		double pseudoDouble = 0.0 / 0.0;

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
		double pseudoDouble = 1.0 / 0.0;

		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << pseudoFloat << "f" << std::endl;
		std::cout << "double: " << pseudoDouble << std::endl;
		
	}
	else if (input == "-inff" || input == "-inf")
	{
		float pseudoFloat = -1.0f / 0.0f;
		double pseudoDouble = -1.0 / 0.0;

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
void	conversionChar(std::string& input)
{
	char	c;

	c = input[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	
}

/**
 * Cuando el input es 42.0f, guardo el número entero y envío el parseInput a la función
 * "conversionNumber" para transformar los tipos de datos (char, int, float, double)
*/
void	isFloat(std::string& input, int posPoint)
{
	std::string parseInput;
	
	if (std::isdigit(input[0]))
	{
		parseInput = input.substr(0, posPoint);
		conversionNumber(parseInput);
	}
}

/**
 * 1.- input = "un char"
 * 2.- input = "parámetro literal"
 * 3.- input = "42"
 * 4.- input = "float"
 * todo lo recibido, es en realidad un std::string, luego lo transformo en los distintos
 * tipos de datos
*/
void  ScalarConverter::convert(std::string& input)
{
	size_t	posPoint = input.find('.');
	
	if (std::isalpha(input[0]) && input.size() == 1)
		conversionChar(input);
	else if (input == "inff" || input == "+inff" || input == "-inff" || input == "nanf"
			|| input == "inf"|| input == "+inf" || input == "-inf" || input == "nan")
				pseudoLiteral(input);
	else if (isNumber(input))
		conversionNumber(input);
	else if (posPoint != std::string::npos)
		isFloat(input, posPoint);	
}