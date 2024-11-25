/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:45:07 by amanjon           #+#    #+#             */
/*   Updated: 2024/11/25 02:27:59 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "../include/AForm.hpp"

#include <iostream>
#include <iomanip>

/* • ShrubberyCreationForm: Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.
• RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.
• PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox. */

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
		int 		gradeSign;
		int			gradeExecute;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& constrCopy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& constrCopy);
		~PresidentialPardonForm();
};

#endif
