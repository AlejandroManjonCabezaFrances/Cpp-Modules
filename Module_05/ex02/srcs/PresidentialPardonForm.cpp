#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: gradeSign(25), gradeExecute(5)
{
	std::cout << GREEN << this->name << " Default constructor PresidentialPardonForm" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& constrCopy)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& constrCopy)
{
	if (this != &constrCopy)
	{
		this->gradeSign = constrCopy.gradeSign;
		this->gradeExecute = constrCopy.gradeExecute;
	}

	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED <<"Default destructor PresidentialPardonForm" << RESET << std::endl;
}

