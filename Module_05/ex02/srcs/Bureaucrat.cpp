/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:27 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/28 11:05:16 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

Bureaucrat::Bureaucrat()
{
	this->name = "I am a Bureaucrat";
	this->grade = 1;
	std::cout << GREEN << this->name << " Default constructor Bureaucrat" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
	: name(_name), grade(_grade)
{
	std::cout << GREEN << this->name << " Default parameterized constructor Bureaucrat" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& constrCopy)
{
	this->name = constrCopy.name;
	this->grade = constrCopy.grade;
	std::cout << GREEN << this->name << " Default constructor copy Bureaucrat" << RESET << std::endl;

 	if (this->grade < 1)
		throw GradeTooHighException();
	else if (this->grade > 150)
		throw GradeTooLowException();
} 

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& constrCopy)
{
	if (this != &constrCopy)
	{
		this->name = constrCopy.name;
		this->grade = constrCopy.grade;
	}

	if (this->grade < 1)
		throw GradeTooHighException();
	else if (this->grade > 150)
		throw GradeTooLowException();

	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED <<"Default destructor Bureaucrat" << RESET << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

int Bureaucrat::increment()
{
	this->grade--;
	if (this->grade < 1)
		throw GradeTooHighException();
	return (this->grade);
}

int Bureaucrat::decrement()
{
	this->grade++;
	if (this->grade > 150)
		throw GradeTooLowException();
	return (this->grade);
}

void	Bureaucrat::printAttributes()
{
	std::cout << YELLOW << "name = " << this->name << RESET << std::endl;
	std::cout << YELLOW << "grade = " << this->grade << RESET << std::endl;
}

void	Bureaucrat::signAForm(AForm& form)
{
	if (form.getIsSigned())
		std::cout << std::endl << BLUE << this->getName() << " bureaucrat signed " << RESET << form.getName() << std::endl << std::endl;
	else
	{
		form.printAttributes();
		std::cout << ORANGE << this->getName() << " bureaucrat couldn’t sign " << RESET << form.getName()
			<< " because the grade was too low or the form wasn't signed" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const& form) const
{
	if (form.getIsSigned())
		form.execute(*this);
	else
		std::cerr << form.getName() << " is not signed" << std::endl;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Execption: Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Execption: Grade too low");
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat& constrCopy)
{
	output << constrCopy;
	return (output);
}