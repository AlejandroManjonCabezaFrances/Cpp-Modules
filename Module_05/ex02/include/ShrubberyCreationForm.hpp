/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:44:51 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/28 11:17:01 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "../include/AForm.hpp"

#include <iostream>
#include <iomanip>

/**
 * • ShrubberyCreationForm: Required grades: sign 145, exec 137
 * Create a file <target>_shrubbery in the working directory, and writes ASCII trees
 * inside it.
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
};

#endif
