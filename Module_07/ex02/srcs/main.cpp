/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:52:21 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/09 02:39:39 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

/**
 * SUBJECT: te sugiere que lo compiles.
   int* a = new int();
   std::cout << "*a = " << *a << std::endl;

   Output:    *a = 0
*/
int main()
{
	{
		std::cout << ORANGE << "Testing the constructors and assignment operator" << RESET << std::endl;
		
		Array<int> a;
		Array<int> b(10);
		Array<int> c = a;
		Array<int> d;
		d = b;

		std::cout << "a - address: "<< &a << " size: " << a.size() << std::endl;
		std::cout << "b - address: "<< &b << " size: " << b.size() << std::endl;
		std::cout << "c - address: "<< &c << " size: " << c.size() << std::endl;
		std::cout << "d - address: "<< &d << " size: " << d.size() << std::endl;
	}
	std::cout << "---------------------------------------------------" << std::endl;
	{
		std::cout << ORANGE << std::endl << "Testing dynamic array with random numbers" << RESET << std::endl;
		
		Array<int> a(5);
		
		srand(static_cast<unsigned int>(time(0)));
		int	randomNumber;
		for (int i = 0; i < 5; i++)
		{
			randomNumber = rand();
			a[i] = randomNumber;
		}
		
		for (int i = 0; i < 5; i++)
			std::cout << "a[" << i << "] = " << a[i] << std::endl;
	}
	std::cout << "---------------------------------------------------" << std::endl;
	{
		std::cout << ORANGE << std::endl << "Testing a index out of range" << RESET << std::endl;
		
		try
		{
			Array<int> a(5);
			
			srand(static_cast<unsigned int>(time(0)));
			int	randomNumber;
			for (int i = 0; i < 5; i++)
			{
				randomNumber = rand();
				a[i] = randomNumber;
			}
			
			a[6] = -10;
			
			for (int i = 0; i < 5; i++)
				std::cout << "a[" << i << "] = " << a[i] << std::endl;
		}
		catch (std::exception& error)
		{
			std::cout << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
		}
	}
	
	return (0);
}
