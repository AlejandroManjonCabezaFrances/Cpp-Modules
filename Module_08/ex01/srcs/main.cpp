/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 01:25:46 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/13 02:18:46 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

/**
 * Llenar el atributo numbers con 10.000 números aleatorios y 
*/
int main()
{
	try
	{
		
	
		// 1.- Meter números Manualmente
		Span mySpan(10000);

		mySpan.addNumber(5);
		mySpan.addNumber(3);
		mySpan.addNumber(6);
		mySpan.addNumber(1);
		mySpan.addNumber(12);

		mySpan.printNumbers();

		

		// 2.- Crear función meter números (10.000) aleatoriamente
		
	}
		catch (std::exception& error)
		{
			std::cout << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
		}
	
	

	return (0);
}

/**
 * Main del Subject
*/
/* int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
} */