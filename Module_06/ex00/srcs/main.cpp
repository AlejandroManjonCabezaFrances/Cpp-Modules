/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:18:03 by amanjon-          #+#    #+#             */
/*   Updated: 2024/12/21 17:48:12 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int main()
{
	std::string input;
	
	while (1)
	{
		std::cout << "Enter a single argument: " << std::endl;
		std::getline(std::cin, input);
		if (input.find(' ') == std::string::npos)
		{
			ScalarConverter::convert(input);
			break;
		}
		std::cout << "your input is: " << input << std::endl;
	}

	return (0);
}