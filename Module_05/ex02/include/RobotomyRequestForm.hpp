#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

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

class RobotomyRequestForm : public AForm
{
	private:
		int gradeSign;
		int	gradeExecute;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& constrCopy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& constrCopy);
		~RobotomyRequestForm();
};

std::ostream& operator<<(std::ostream &output, const RobotomyRequestForm& constrCopy);

#endif
