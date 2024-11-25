/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:45:26 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/25 02:25:19 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: target("Carles Puigdemont"), gradeSign(25), gradeExecute(5)
{
	std::cout << GREEN << " Default constructor PresidentialPardonForm" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: target(target), gradeSign(25), gradeExecute(5)
{
	std::cout << GREEN << " Default parameterized constructor PresidentialPardonForm" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& constrCopy)
	: target(constrCopy.target), gradeSign(constrCopy.gradeSign), gradeExecute(constrCopy.gradeExecute)
{
	std::cout << GREEN << " Default constructor copy PresidentialPardonForm" << RESET << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& constrCopy)
{
	if (this != &constrCopy)
	{
		this->gradeSign = constrCopy.gradeSign;
		this->gradeExecute = constrCopy.gradeExecute;
	}

	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED <<"Default destructor PresidentialPardonForm" << RESET << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	
}
