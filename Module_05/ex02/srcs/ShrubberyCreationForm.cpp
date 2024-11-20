#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: gradeSign(145), gradeExecute(137)
{
	std::cout << GREEN << this->name << " Default constructor ShrubberyCreationForm" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& constrCopy)
	: gradeSign(constrCopy.gradeSign), gradeExecute(constrCopy.gradeExecute)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& constrCopy)
{
	if (this != &constrCopy)
	{
		this->gradeSign = constrCopy.gradeSign;
		this->gradeExecute = constrCopy.gradeExecute;
	}

	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED <<"Default destructor ShrubberyCreationForm" << RESET << std::endl;
}

