/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:17 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/07 12:49:56 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "../include/Colors.hpp"

#include <iostream>
#include <iomanip>

/**
 * Arrojar/Capturar una execpción con los bloques: throw, try, catch.
 * Particularidad: una clase dentro de otra clase -->  class GradeTooHighException, 
 * hereda de std::exception, para beneficiarse de las características de manejo de 
 * errores de la biblioteca estándar.
 * const throw necesario para polimorfismo (sobreescribir función what()) de la clase que hereda
 * y no de la clase base --> std::exception
*/
class Bureaucrat
{
	private:
		std::string name;
		int         grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(const Bureaucrat& constrCopy);
		Bureaucrat& operator=(const Bureaucrat& constrCopy);
		~Bureaucrat();
		std::string getName() const;
		int 		getGrade() const;
		int 		increment();
		int			decrement();
		void		printAttributes();

		class GradeTooHighException : public std::exception{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char* what() const throw();
		};
};      

std::ostream& operator<<(std::ostream &output, const Bureaucrat& constrCopy);

#endif
