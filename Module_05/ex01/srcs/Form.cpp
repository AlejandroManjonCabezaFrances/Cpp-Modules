/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:56:50 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/12 11:40:42 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form()
{
	this->name = "Creating an form";
	this->gradeSign = 1;
	this->gradeExecute = 1;
	this->isSigned = FALSE;
	std::cout << GREEN << this->name << " Default constructor Form" << RESET << std::endl;
}

Form::Form(const std::string _name, const int _gradeSign, const int _gradeExecute, bool _isSigned)
	: name(_name), gradeSign(_gradeSign), gradeExecute(_gradeExecute), isSigned(_isSigned)
{
	std::cout << GREEN << this->name << " Default parameterized constructor Form" << RESET << std::endl;
}

Form::Form(const Form& constrCopy)
{
	this->name = constrCopy.name;
	this->gradeSign = constrCopy.gradeSign;
	this->gradeExecute = constrCopy.gradeExecute;
	this->isSigned = constrCopy.isSigned;

	if (this->grade < 1)
		throw GradeTooHighException();
	else if (this->grade > 150)
		throw GradeTooLowException();
}

Form& Form::operator=(const Form& constrCopy)
{
	if (this != &constrCopy)
	{
		this->name = constrCopy.name;
		this->gradeSign = constrCopy.gradeSign;
		this->gradeExecute = constrCopy.gradeExecute;
		this->isSigned = constrCopy.isSigned;
	}

	if (this->grade < 1)
		throw GradeTooHighException();
	else if (this->grade > 150)
		throw GradeTooLowException();

	return (*this);
}

Form::~Form()
{
	std::cout << RED <<"Default destructor Form" << RESET << std::endl;
}

std::string Form::getName() const
{
	return (this->name);
}

int Form::getGradeSign() const
{
	return (this->gradeSign);
}

int	Form::getGradeExecute() const
{
	return (this->gradeExecute);
}

bool	Form::getIsSigned() const
{
	return (this->isSigned);
}

void	Form::beSigned(Bureaucrat& person)
{
	if (person.grade >= 150)
		

	else
		throw GradeTooLowException();
}

const char*	Form::GradeTooHighException::what() const throw
{
	return ("Execption: Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw
{
	return ("Execption: Grade too low");
}

std::ostream& operator<<(std::ostream &output, const Form& constrCopy)
{
	output << constrCopy;
	return (output);
}
