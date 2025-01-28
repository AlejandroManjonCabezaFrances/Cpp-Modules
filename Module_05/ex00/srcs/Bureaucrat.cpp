/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:27 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/20 05:50:57 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->name = "I am a Bureaucrat";
	this->grade = 1;
	std::cout << GREEN << this->name << " Default constructor" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
	: name(_name), grade(_grade)
{
	std::cout << GREEN << this->name << " Default parameterized constructor" << RESET << std::endl;
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
	std::cout << RED <<"Default destructor" << RESET << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

/**
 * Incrementing a grade 3 should give a grade 2 to the bureaucrat.
*/
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