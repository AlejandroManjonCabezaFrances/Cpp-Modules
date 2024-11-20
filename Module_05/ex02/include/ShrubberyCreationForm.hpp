#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

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

class ShrubberyCreationForm : public AForm
{
	private:
		int gradeSign;
		int	gradeExecute;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& constrCopy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& constrCopy);
		~ShrubberyCreationForm();
};

std::ostream& operator<<(std::ostream &output, const ShrubberyCreationForm& constrCopy);

#endif
