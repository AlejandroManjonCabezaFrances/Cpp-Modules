/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:18:17 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/05 11:32:00 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
/* #include <stdexcept>  // Para std::runtime_error *prueba*  */

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
			const char* what();                    	// probar sin "const throw()"
		};
		class GradeTooLowException : public std::exception{
			const char* what();                        	// probar sin "const throw()"
		};
};      

std::ostream& operator<<(std::ostream &output, const Bureaucrat& constrCopy);

#endif
