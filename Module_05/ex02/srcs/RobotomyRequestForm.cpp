#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: gradeSign(72), gradeExecute(45)
{
	std::cout << GREEN << this->name << " Default constructor RobotomyRequestForm" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& constrCopy)
{

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

