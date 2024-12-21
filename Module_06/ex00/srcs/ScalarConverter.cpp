/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:50:39 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/21 18:20:27 by amanjon          ###   ########.fr       */
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
 * tipo char: 'c', 'a', ...
 * tipo int: 0, -42, 42, ...
 * tipo float: 0.0f, -4.2f, 4.2f, ...
 * pseudo literales (por ciencia, ya sabes): -inff, +inff y nanf.
 * tipo double: 0.0, -4.2, 4.2, ...
 * pseudo literales (por diversión): -inf, +inf y nan.
*/
void	charConversion(std::string& input)
{
	char	c;

	c = input[0];
	std::cout << "char = " << c << std::endl;
	std::cout << "int = " << static_cast<int>(c) << std::endl;
	std::cout << "float = " << static_cast<float>(c) << std::endl;
	std::cout << "double = " << static_cast<double>(c) << std::endl;
	
}

void  ScalarConverter::convert(std::string& input)
{
	if (std::isalpha(input[0]) && input.size() == 1)
		charConversion(input);
	else if (input == "+inff" || input == "-inff" || input == "nanf"
			|| input == "+inf" || input == "-inf" || input == "nan")
				std::cout << "ok" << std::endl;
	else
		std::cout << "input no es ni alfanumerico o mide más de 1" << std::endl;
}