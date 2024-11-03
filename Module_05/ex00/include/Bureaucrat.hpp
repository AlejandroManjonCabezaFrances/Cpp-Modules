#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>

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
		int getGrade() const;
		int increment();
		int decrement();

		class GradeTooHighExecption : public std::exception{
			const char* what() const throw();                        	// probar sin "const throw()"
		}
		class GradeTooLowExecption : public std::exception{
			const char* what() const throw();                        	// probar sin "const throw()"
		}
};      

std::ostream& operator<<(std::ostream &output, const Bureaucrat& constrCopy);

#endif
