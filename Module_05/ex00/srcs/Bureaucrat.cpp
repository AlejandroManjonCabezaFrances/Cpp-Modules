/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:27 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/04 10:18:30 by amanjon          ###   ########.fr       */
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
	try
	{
		if (this->grade < 1)
			throw GradeTooHighExecption();
		else if (this->grade > 150)
			throw GradeTooLowExecption();
	}

	this->name = constrCopy.name;
	this->grade = constrCopy.grade;

	catch (GradeTooHighException& excp)
	{
		std::cout << "Caught exception" << excp.what() << std::endl;
	}
	catch (GradeTooLowException& excp)
	{
		std::cout << "Caught exception" << excp.what() << std::endl;
	}

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& constrCopy)
{
	if (this != &constrCopy)
	{
		this->name = constrCopy.name;
		this->grade = constrCopy.grade;
	}

	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor" << std::endl;
}

std::string getName() const
{
	return (this->name);
}

int getGrade() const
{
	return (this->grade);
}


int Bureaucrat::increment()
{
	this->grade--;
	return (this->grade);
}

int Bureaucrat::decrement()
{
	this->grade++;
	return (this->grade);
}

const char*	Bureaucrat::GradeTooHighExecption::what()
{
	return ("Execption: Grade too high");
	/* std::cout << "Execption: Grade too high" << std::endl; */
}

const char*	Bureaucrat::GradeTooLowExecption::what()
{
	return ("Execption: Grade too low");
	/* std::cout << "Execption: Grade too low" << std::endl; */
}
