/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:27 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/05 12:17:01 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->name = "I am a Bureaucrat";
	this->grade = 1;
	std::cout << this->name << " Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
	: name(_name), grade(_grade)
{
	std::cout << this->name << " Default parameterized constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& constrCopy)
{
	this->name = constrCopy.name;
	this->grade = constrCopy.grade;

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
	std::cout << "Default destructor" << std::endl;
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
	std::cout << "name = " << this->name << std::endl;
	std::cout << "grade = " << this->grade << std::endl;
}

const char*	Bureaucrat::GradeTooHighException::what() 
{
	return ("Execption: Grade too high");
	/* std::cout << "Execption: Grade too high" << std::endl; */
}

const char*	Bureaucrat::GradeTooLowException::what() 
{
	return ("Execption: Grade too low");
	/* std::cout << "Execption: Grade too low" << std::endl; */
}


std::ostream& operator<<(std::ostream &output, const Bureaucrat& constrCopy)
{
	output << constrCopy;
	return (output);
}