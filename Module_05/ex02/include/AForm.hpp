/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:56:33 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/02 14:26:46 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "../include/Bureaucrat.hpp"

#include <iostream>
#include <iomanip>
#include <fstream>

/**
 * gradeSign: grado mínimo necesario para firmar el formulario.
 * gradeExecute: grado mínimo necesario para ejecutar la acción del formulario.
 * virtual ... conts = 0; - Así hacemos que la clase sea abstracta. Método puro. Todas 
 * las clases derivadas deberán proporcionar una implementación concreta para ese método 
 * si quieren ser instanciadas. En la clase AForm no está implementado este método.
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
		std::string 	getName() const;
		int 			getGradeSign() const;
		int 			getGradeExecute() const;
		bool			getIsSigned() const; 
		void			printAttributes();

		void			beSigned(Bureaucrat& person);
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception{
		const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
		const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
		public:
			/* virtual */ const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &output, const AForm& AForm);

#endif
