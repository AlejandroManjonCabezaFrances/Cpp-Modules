#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->name = "I am a Bureaucrat";
	this->grade = 1;
	std::cout << this->name << " Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::strin _name, int _grade)
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

	catch (const GradeTooHighExecption& excp)
	{
		std::cout >> "Caught exception" << excp.what() << std::endl;
	}
	catch (const GradeTooLowExecption& excp)
	{
		std::cout >> "Caught exception" << excp.what() << std::endl;
	}

	constrCopy.name = this->name;
	constrCopy.grade = this->grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& constrCopy)
{
	if (this != &constrCopy)
	{
		constrCopy.name = this->name;
		constrCopy.grade = this->grade;
	}

	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor" << est::endl;
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
	this->grade - 1;
	return (this);
}

int Bureaucrat::decrement()
{
	this->grade + 1;
	return (this);
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
