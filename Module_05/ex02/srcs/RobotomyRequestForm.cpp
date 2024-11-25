/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:45:21 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/25 02:24:50 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: target("R2D2"), gradeSign(72), gradeExecute(45)
{
	std::cout << GREEN << " Default constructor RobotomyRequestForm" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: target(target), gradeSign(72), gradeExecute(45)
{
	std::cout << GREEN << " Default parameterized constructor RobotomyRequestForm" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& constrCopy)
	: target(constrCopy.target), gradeSign(constrCopy.gradeSign), gradeExecute(constrCopy.gradeExecute)
{
	std::cout << GREEN << " Default constructor copy RobotomyRequestForm" << RESET << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& constrCopy)
{
	if (this != &constrCopy)
	{
		this->gradeSign = constrCopy.gradeSign;
		this->gradeExecute = constrCopy.gradeExecute;
	}

	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED <<"Default destructor RobotomyRequestForm" << RESET << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	
}
