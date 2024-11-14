/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:17 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/14 14:34:22 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "../include/Colors.hpp"

#include <iostream>
#include <iomanip>

/**
 * grade: un valor más bajo representa un rango más alto 
 * (un burócrata grado 1 tiene más autoridad que uno con grado 5)
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
		void		signForm(Form& form);

		class GradeTooHighException : public std::exception{
		const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
		const char* what() const throw();
		};
};      

std::ostream& operator<<(std::ostream &output, const Bureaucrat& constrCopy);

#endif
