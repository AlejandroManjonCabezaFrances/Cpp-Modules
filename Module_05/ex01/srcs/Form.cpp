/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:56:50 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/20 05:50:09 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

Form::Form()
	: name("Document_A"), gradeSign(0), gradeExecute(0)
{
	this->isSigned = false;
	std::cout << GREEN << this->name << " Default constructor Form" << RESET << std::endl;
}

Form::Form(const std::string _name, const int _gradeSign, const int _gradeExecute, bool _isSigned)
	: name(_name), gradeSign(_gradeSign), gradeExecute(_gradeExecute), isSigned(_isSigned)
{
	if (this->gradeSign < 1 || this->gradeExecute < 1)
		throw GradeTooHighException();
	else if (this->gradeSign > 150 || this->gradeExecute > 150)	
		throw GradeTooLowException();
	std::cout << GREEN << this->name << " Default parameterized constructor Form" << RESET << std::endl;
}

Form::Form(const Form& constrCopy)
	: name(constrCopy.name), gradeSign(constrCopy.gradeSign), gradeExecute(constrCopy.gradeExecute), isSigned(constrCopy.isSigned)
{
	std::cout << GREEN << this->name << " Default constructor copy Form" << RESET << std::endl;
}

Form& Form::operator=(const Form& constrCopy)
{
	if (this != &constrCopy)
	{
		this->isSigned = constrCopy.isSigned;
	}
	
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

void	Form::printAttributes()
{
	std::cout << YELLOW << "name = " << this->name << RESET << std::endl;
	std::cout << YELLOW << "gradeSign = " << this->gradeSign << RESET << std::endl;
	std::cout << YELLOW << "gradeExecute = " << this->gradeExecute << RESET << std::endl;
	std::cout << YELLOW << "isSigned = " << this->isSigned << RESET << std::endl;
}

void	Form::beSigned(Bureaucrat& person)
{

	if (this->gradeSign >= person.getGrade() && person.getGrade() > 0)
	{
		this->isSigned = true; 
		person.signForm(*this);
	}
	else
	{
		person.signForm(*this);
		throw GradeTooLowException();
	}
		
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Execption: Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Execption: Grade too low");
}

std::ostream& operator<<(std::ostream &output, const Form& constrCopy)
{
	output << constrCopy;
	return (output);
}
