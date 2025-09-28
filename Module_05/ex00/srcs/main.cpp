/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:34 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/07 12:08:35 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main()
{
	Bureaucrat a("Ironman", 2);
	Bureaucrat b(a);
	Bureaucrat c("Thor", 5);
	
	c = a;
	
	std::cout << UNDERLINE << "object a" << RESET << std::endl;
	a.printAttributes();
	
	std::cout << UNDERLINE << std::endl << "object b" << RESET << std::endl;
	b.printAttributes();
	
	std::cout << UNDERLINE << std::endl << "object c" << RESET << std::endl;
	c.printAttributes();
	std::cout << std::endl;
	
	try
	{	
		std::cout << "try ***************" << std::endl;
		
		a.decrement();			// 3
		a.printAttributes();
		a.increment();			// 2
		a.increment();			// 1
		a.printAttributes();
		a.increment();			// 0
		a.printAttributes();	// No print for exception
	}

	catch (std::exception& error)
	{
		std::cout << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
	}
	
	return (0);	
}

/* int	division(int enumerator, int denominator)
{
	if (denominator == 0)
		throw ("Error: denominator is 0");
	return (enumerator / denominator);
}

int main()
{
	int a;
	int b;

	a = 10;
	b = 0;
	try
	{
		int result;

		result = division(a, b);
		std::cout << "resutl = " << result << std::endl;
	}
	
	catch (const char* sms)	
	{
		std::cout << PINK << "Exception message: " << sms << RESET << std::endl;
	}
	
	return (0);
} */

/* int division(int enumerator, int denominator)
{
	if (denominator == 0)
		throw std::runtime_error("Error: denominator is 0");  // Lanzamos std::runtime_error
	return (enumerator / denominator);
}

int main()
{
	int a;
	int b;

	a = 10;
	b = 0;
	try
	{
		int result;

		result = division(a, b);
		std::cout << "result = " << result << std::endl;
	}
	catch (const std::exception& e)  // Capturamos una excepción std::exception
	{
		std::cout << PINK << "Exception message: " << e.what() << RESET << std::endl;  // Usamos what() para obtener el mensaje
	}
	
	return (0);
} */
