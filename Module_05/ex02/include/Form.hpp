/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:56:33 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/19 23:18:39 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <iomanip>

#include "../include/Bureaucrat.hpp"


/**
 * gradeSign: grado mínimo necesario para firmar el formulario.
 * gradeExecute: grado mínimo necesario para ejecutar la acción del formulario.
*/

class Bureaucrat;	// Declaración adelantada por void	beSigned(Bureaucrat& person);

class AForm
{
	private:
		const std::string	name;
		const int			gradeSign;
		const int			gradeExecute;
		bool  				isSigned;
	public:
		AForm();
		AForm(const std::string _name, const int _gradeSign, const int _gradeExecute, bool _isSigned);
		AForm(const AForm& constrCopy);
		AForm& operator=(const AForm& constrCopy);
		~AForm();
		std::string getName() const;
		int 		getGradeSign() const;
		int 		getGradeExecute() const;
		bool		getIsSigned() const;
		void		printAttributes();

		void	beSigned(Bureaucrat& person);

		class GradeTooHighException : public std::exception{
		const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
		const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &output, const AForm& constrCopy);

#endif