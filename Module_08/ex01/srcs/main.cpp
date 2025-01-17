/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 01:25:46 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/17 11:11:04 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

/**
 * Llenar el atributo numbers con 10.000 números aleatorios y 

 * Meter más de 10.000 elementos en el contenedor, arroja una excepción.
*/
int main()
{
	try
	{
		Span mySpan(10000);

		// 1.- Meter números Manualmente

		mySpan.addNumber(16);
		mySpan.addNumber(12);
		mySpan.addNumber(100);
		mySpan.addNumber(20);
		mySpan.addNumber(3);

		mySpan.printNumbers();
		
		std::cout << std::endl;
		std::cout << "shortestSpan: " << mySpan.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << mySpan.longestSpan() << std::endl;


		// 2.- Meter números con función (10.000)

/* 		mySpan.randomNumbersCreator(mySpan);

		mySpan.printNumbers();

		std::cout << std::endl;
		std::cout << "shortestSpan: " << mySpan.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << mySpan.longestSpan() << std::endl; */
	} 
	catch (std::exception& error)
	{
		std::cout << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
	}
	
	return (0);
}

/**
 * Output sunject:
 
   $> ./ex01
    2
    14
$> 

 * Main del Subject: 
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
	
	return (0);
} */
