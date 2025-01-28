/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 08:24:26 by amanjon-          #+#    #+#             */
/*   Updated: 2024/12/16 19:30:16 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern()
{
	std::cout << GREEN << "Default constructor Intern" << RESET << std::endl;
}

Intern::Intern(const Intern& constrCopy)
{
	std::cout << GREEN << "Default constructor copy Intern" << RESET << std::endl;
	*this = constrCopy;
}

Intern& Intern::operator=(const Intern& constrCopy)
{
	(void) constrCopy;
	return (*this);
}

Intern::~Intern()
{
	std::cout << RED <<"Default destructor Intern" << RESET << std::endl;
}

/**
 * const: no se modificarán los valores dentro de la función y permite pasar cadenas literales "robotomy request form"
 * &: no pasa una copia, mayor eficiencia
*/
AForm*  Intern::makeForm(const std::string& nameForm, const std::string& target)
{
	std::string literalName[3] = {"Shrubbery Creation Form", "Robotomy Request Form", "Presidential Pardon Form"};
	AForm* internForm = NULL;

	int i = 0;
	for (; i < 3; i++)
	{
		if (nameForm == literalName[i])
		break;
	}

	switch(i)
	{
		case 0:
			internForm = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << nameForm << std::endl;
			return (internForm);
		case 1:
			internForm = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << nameForm << std::endl;
			return (internForm);
		case 2:
			internForm = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << nameForm << std::endl;
			return (internForm);
		default:
			std::cerr << "Error: Form not found" << std::endl;
			break;
	}
	return (NULL);
}
