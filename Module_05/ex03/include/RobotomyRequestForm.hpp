/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:45:00 by amanjon           #+#    #+#             */
/*   Updated: 2024/12/16 19:56:07 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "../include/AForm.hpp"

#include <iostream>
#include <iomanip>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

/**
 * • RobotomyRequestForm: Required grades: sign 72, exec 45
 * Makes some drilling noises. Then, informs that <target> has been robotomized
 * successfully 50% of the time. Otherwise, informs that the robotomy failed.
*/

class RobotomyRequestForm : public AForm
{
	private:
		std::string	target;
		int 		gradeSign;
		int			gradeExecute;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& constrCopy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& constrCopy);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const& executor) const;
		void	actionByIntern() const;
};

#endif
