/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:34 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/15 14:08:09 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main()
{
	Bureaucrat	Ironman("Ironman", 2);
	Form		a("Document_A", 5, 5, false);
	
	std::cout << UNDERLINE << "Print attributes of \"Bureaucrat	Ironman\"" << RESET << std::endl;
	Ironman.printAttributes();
	
	std::cout << UNDERLINE << std::endl << "Print attributes of \"Form a\"" << RESET << std::endl;
	a.printAttributes();
	
	std::cout << std::endl;
	
	/* try
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
	} */
	
	return (0);	
}
