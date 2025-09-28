/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:18:03 by amanjon-          #+#    #+#             */
/*   Updated: 2024/12/22 16:13:25 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

/**
 * Ejemplos de uso:

bash
./convert 0  

char: Non displayable  
int: 0  
float: 0.0f  
double: 0.0  

bash
./convert nan  

char: impossible  
int: impossible  
float: nanf  
double: nan  

bash
./convert 42.0f  

char: '*'  
int: 42  
float: 42.0f  
double: 42.0 
*/
int main()
{
	std::string input;
	
	while (1)
	{
		std::cout << "Enter a single argument: one letter or numbers " << std::endl;
		std::getline(std::cin, input);
		if (input.find(' ') == std::string::npos)
		{
			ScalarConverter::convert(input);
			if (input == "exit")
				break;
		}
	}

	return (0);
}