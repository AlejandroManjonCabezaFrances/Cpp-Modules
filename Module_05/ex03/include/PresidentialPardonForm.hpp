/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:45:07 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/16 19:56:10 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "../include/AForm.hpp"

#include <iostream>
#include <iomanip>

/**
 * • PresidentialPardonForm: Required grades: sign 25, exec 5
 * Informs that <target> has been pardoned by Zaphod Beeblebrox.
*/

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
		
		void	execute(Bureaucrat const& executor) const;
		void	actionByIntern() const;
};

#endif
