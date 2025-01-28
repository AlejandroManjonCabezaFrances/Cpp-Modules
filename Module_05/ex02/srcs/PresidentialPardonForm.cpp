/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:45:26 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/28 11:13:33 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", 25, 5, false), target("Carles Puigdemont"), gradeSign(25), gradeExecute(5)
{
	std::cout << GREEN << " Default constructor PresidentialPardonForm" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5, false), target(target), gradeSign(25), gradeExecute(5)
{
	std::cout << GREEN << " Default parameterized constructor PresidentialPardonForm" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& constrCopy)
	: AForm(), target(constrCopy.target), gradeSign(constrCopy.gradeSign), gradeExecute(constrCopy.gradeExecute)
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

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() != true)
		throw (FormNotSignedException());
	if (executor.getGrade() <= this->gradeSign && executor.getGrade() <= this->gradeExecute)
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
		throw (GradeTooLowException());
}
