/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:56:33 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/12 11:24:17 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <iomanip>

class Form
{
	private:
		const std::string	name;
		const int			gradeSign;
		const int			gradeExecute;
		bool  				isSigned;
	public:
		Form();
		Form(const std::string _name, const int _gradeSign, const int _gradeExecute, bool _isSigned);
		Form(const Form& constrCopy);
		Form& operator=(const Form& constrCopy);
		~Form();
		std::string getName() const;
		int 		getGradeSign() const;
		int 		getGradeExecute() const;
		bool		getIsSigned() const;

		void	beSigned(Bureaucrat& person);
		void	signForm();

		class GradeTooHighException : public std::exception{
		const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
		const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &output, const Form& constrCopy);

#endif