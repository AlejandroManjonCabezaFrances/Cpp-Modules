/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:45:15 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/22 03:50:23 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: target("Garden"), gradeSign(145), gradeExecute(137)
{
	std::cout << GREEN << this->name << " Default constructor ShrubberyCreationForm" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: target(target), gradeSign(145), gradeExecute(137)
{
	std::cout << GREEN << this->name << " Default parameterized constructor ShrubberyCreationForm" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& constrCopy)
	: target(constrCopy.target), gradeSign(constrCopy.gradeSign), gradeExecute(constrCopy.gradeExecute)
{
	std::cout << GREEN << this->name << " Default constructor copy ShrubberyCreationForm" << RESET << std::endl;
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


/* Ahora, agrega la función miembro execute(Bureaucrat const & executor) const a la clase base y 
implementa una función para ejecutar la acción del formulario en las clases concretas. Debes verificar que:
- El formulario esté firmado.
- Que el rango del burócrata que intenta ejecutar el formulario sea lo suficientemente alto. */

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->getIsSigned != true)
		throw (FormNotSignedException());
	if (this->gradeSign)
	{
		
	}
	{
		
	
		std::ofstream	file;
		std::string		fileName = this->target + "_shrubbery";
		
		file.open(fileName.c_str());
		if(file.is_open())
		{
			file << "              *" << std::endl;
			file << "             /*\\" << std::endl;
			file << "            /o*o\\" << std::endl;
			file << "           /*o*o*\\" << std::endl;
			file << "          /o*o*o*o\\" << std::endl;
			file << "         /*o*o*o*o*\\" << std::endl;
			file << "        /o*o*o*o*o*o\\" << std::endl; 
			file << "       /*************\\" << std::endl;
			file << "             |||" << std::endl;
			file << "             |||" << std::endl;
			file << "			  |||" << std::endl;
			
			file.close();
		}
		else
			std::cerr << "Error: cannot open the file " << std::endl;
	}
}

const char*	ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
	return ("Execption: Grade too high");
}

const char*	ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
	return ("Execption: Grade too low");
}

std::ostream& operator<<(std::ostream &output, const AForm& constrCopy)
{
	output << constrCopy;
	return (output);
}
