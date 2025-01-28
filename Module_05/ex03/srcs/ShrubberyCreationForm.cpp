/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:45:15 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/16 19:56:03 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 145, 137, false), target("Garden"), gradeSign(145), gradeExecute(137)
{
	std::cout << GREEN << "Default constructor ShrubberyCreationForm" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137, false), target(target), gradeSign(145), gradeExecute(137)
{
	std::cout << GREEN << "Default parameterized constructor ShrubberyCreationForm" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& constrCopy)
	: AForm(), target(constrCopy.target), gradeSign(constrCopy.gradeSign), gradeExecute(constrCopy.gradeExecute)
{
	std::cout << GREEN << "Default constructor copy ShrubberyCreationForm" << RESET << std::endl;
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

void	ShrubberyCreationForm::printTree() const
{
		std::ofstream	file;
		std::string		fileName = this->target + "_shrubbery";
		
		file.open(fileName.c_str());
		if(file.is_open())
		{
			file << "        *" << std::endl;
			file << "       /*\\" << std::endl;
			file << "      /o*o\\" << std::endl;
			file << "     /*o*o*\\" << std::endl;
			file << "    /o*o*o*o\\" << std::endl;
			file << "   /*o*o*o*o*\\" << std::endl;
			file << "  /o*o*o*o*o*o\\" << std::endl; 
			file << " /*************\\" << std::endl;
			file << "       |||" << std::endl;
			file << "       |||" << std::endl;
			file << "       |||" << std::endl;
			
			file.close();
		}
		else
			std::cerr << "Error: cannot open the file " << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->getIsSigned() != true)
		throw (FormNotSignedException());
	if (executor.getGrade() <= this->gradeSign && executor.getGrade() <= this->gradeExecute)
		this->printTree();
	else
		throw (GradeTooLowException());
}

void	ShrubberyCreationForm::actionByIntern() const
{
	this->printTree();
}
