/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:44:51 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/25 02:28:14 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "../include/AForm.hpp"

#include <iostream>
#include <iomanip>

/**
 * No es necesario hacer getter/setters en las clases derivadas (ya que la lógica no la
 * necesito cambiar), ya que podría usar los de la clase base, sobreescribiría la función base.
*/

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;
		int 		gradeSign;
		int			gradeExecute;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& constrCopy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& constrCopy);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const& executor) const;
		void	printTree() const;

		class GradeTooHighException : public std::exception{
		const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
		const char* what() const throw();
		};
};

#endif