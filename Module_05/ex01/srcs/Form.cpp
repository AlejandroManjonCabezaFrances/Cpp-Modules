/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:56:50 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/07 11:32:08 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form()
{
	this->name = "Creating an activity";
	this->gradeSign = 1;
	this->gradeExecute = 1;
	this->isSigned = FALSE;
	std::cout << GREEN << this->name << " Default constructor" << RESET << std::endl;
}

Form::Form(const std::string _name, const int _gradeSign, const int _gradeExecute, bool _isSigned)
	: name(_name), gradeSign(_gradeSign), gradeExecute(_gradeExecute), isSigned(_isSigned)
{
	std::cout << GREEN << this->name << " Default parameterized constructor" << RESET << std::endl;
}

Form::Form(const Form& constrCopy)
{
	this->name = constrCopy.name;
	this->gradeSign = constrCopy.gradeSign;
	this->gradeExecute = constrCopy.gradeExecute;
	this->isSigned = constrCopy.isSigned;

	
}

Form& Form::operator=(const Form& constrCopy)
{
	if (this != &constrCopy)
	{
		this->name = constrCopy.name;
		this->gradeSign = constrCopy.gradeSign;
		this->gradeExecute = constrCopy.gradeExecute;
		this->isSigned = constrCopy.isSigned;
	}

	return (*this);
}

Form::~Form()
{
}

