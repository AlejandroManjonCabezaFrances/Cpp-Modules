/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:56:50 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/19 23:19:37 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

AForm::AForm()
	: name("Document_A"), gradeSign(0), gradeExecute(0)
{
	this->isSigned = false;
	std::cout << GREEN << this->name << " Default constructor AForm" << RESET << std::endl;
}

AForm::AForm(const std::string _name, const int _gradeSign, const int _gradeExecute, bool _isSigned)
	: name(_name), gradeSign(_gradeSign), gradeExecute(_gradeExecute), isSigned(_isSigned)
{
	if (this->gradeSign < 1 || this->gradeExecute < 1)
		throw GradeTooHighException();
	else if (this->gradeSign > 150 || this->gradeExecute > 150)	
		throw GradeTooLowException();
	std::cout << GREEN << this->name << " Default parameterized constructor AForm" << RESET << std::endl;
}

AForm::AForm(const AForm& constrCopy)
	: name(constrCopy.name), gradeSign(constrCopy.gradeSign), gradeExecute(constrCopy.gradeExecute), isSigned(constrCopy.isSigned)
{
	std::cout << GREEN << this->name << " Default constructor copy AForm" << RESET << std::endl;
}

AForm& AForm::operator=(const AForm& constrCopy)
{
	if (this != &constrCopy)
	{
		this->isSigned = constrCopy.isSigned;
	}
	
	return (*this);
}

AForm::~AForm()
{
	std::cout << RED <<"Default destructor AForm" << RESET << std::endl;
}

std::string AForm::getName() const
{
	return (this->name);
}

int AForm::getGradeSign() const
{
	return (this->gradeSign);
}

int	AForm::getGradeExecute() const
{
	return (this->gradeExecute);
}

bool	AForm::getIsSigned() const
{
	return (this->isSigned);
}

void	AForm::printAttributes()
{
	std::cout << YELLOW << "name = " << this->name << RESET << std::endl;
	std::cout << YELLOW << "gradeSign = " << this->gradeSign << RESET << std::endl;
	std::cout << YELLOW << "gradeExecute = " << this->gradeExecute << RESET << std::endl;
	std::cout << YELLOW << "isSigned = " << this->isSigned << RESET << std::endl;
}

void	AForm::beSigned(Bureaucrat& person)
{
	
	if (this->gradeSign >= person.getGrade() && person.getGrade() > 0)
	{
		this->isSigned = true; 
		person.signAForm(*this);
	}
	else
	{
		person.signAForm(*this);
		throw GradeTooLowException();
	}
		
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Execption: Grade too high");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Execption: Grade too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Exception: Form not Signed");
}

std::ostream& operator<<(std::ostream &output, const AForm& AForm)
{
	output << YELLOW << "AForm name: " << AForm.getName() << std::endl
		<< "Grade to Sign AForm: " << AForm.getGradeSign() << std::endl
			<< "Grade to execute AForm: " << AForm.getGradeExecute() << std::endl
				<< "Is Signed?: ";

	if (AForm.getIsSigned())
		output << "true" << std::endl;
	else
		output << "false" << RESET << std::endl;
	return (output);
}
