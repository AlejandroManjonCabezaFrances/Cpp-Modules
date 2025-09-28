/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:45:21 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/16 20:01:47 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", 72, 45, false), target("R2D2"), gradeSign(72), gradeExecute(45)
{
	std::cout << GREEN << "Default constructor RobotomyRequestForm" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45, false), target(target), gradeSign(72), gradeExecute(45)
{
	std::cout << GREEN << "Default parameterized constructor RobotomyRequestForm" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& constrCopy)
	: AForm(), target(constrCopy.target), gradeSign(constrCopy.gradeSign), gradeExecute(constrCopy.gradeExecute)
{
	std::cout << GREEN << "Default constructor copy RobotomyRequestForm" << RESET << std::endl;
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

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() != true)
		throw (FormNotSignedException());
	if (executor.getGrade() > this->gradeSign || executor.getGrade() > this->gradeExecute)
		throw (GradeTooLowException());
	
	std::cout << "Brrrr... Brrr... Drilling noises!! ..." << std::endl;
	
	std::srand(std::time(NULL));
	int randomNumber = std::rand() % 100;

	if (randomNumber < 50)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "the robotomy failed on " << this->target << std::endl;
}

void	RobotomyRequestForm::actionByIntern() const
{	
	std::srand(std::time(NULL));
	int randomNumber = std::rand() % 100;

	if (randomNumber < 50)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "the robotomy failed on " << this->target << std::endl;
}