/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:34 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/28 11:14:30 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat Murphy("Murphy", 137);
	Bureaucrat Turing("Turing", 45);
	Bureaucrat Newton("Newton", 5);

	ShrubberyCreationForm a;
	RobotomyRequestForm b;
	PresidentialPardonForm c;

	try
	{
		a.beSigned(Murphy);
		std::cout << a << std::endl;
		Murphy.executeForm(a);
	}
	catch(std::exception& error)
	{
		std::cerr << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
	}
	
	try
	{
		b.beSigned(Turing);
		std::cout << b << std::endl;
		Turing.executeForm(b);
	}
	catch(std::exception& error)
	{
		std::cerr << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
	}

	try
	{
		c.beSigned(Newton);
		std::cout << c << std::endl;
		Newton.executeForm(c);
	}
	catch(std::exception& error)
	{
		std::cerr << PINK << std::endl << "Caught exception " << error.what() << RESET << std::endl;
	}
	
	return (0);
}
