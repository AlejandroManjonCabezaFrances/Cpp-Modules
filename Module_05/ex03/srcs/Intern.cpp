#include "../include/Intern.hpp"

Intern::Intern()
{
    std::cout << GREEN << " Default constructor Intern" << RESET << std::endl;
}

Intern::Intern(const Intern& constrCopy)
{
    std::cout << GREEN << " Default constructor copy Intern" << RESET << std::endl;
    *this = constrCopy;
}

Intern& Intern::operator=(const Intern& constrCopy)
{
    return (*this);
}

Intern::~Intern()
{
    std::cout << RED <<"Default destructor Intern" << RESET << std::endl;
}1

/**
 * const: no se modificarán los valores dentro de la función y permite pasar cadenas literales "robotomy request form"
 * &: no pasa una copia, mayor eficiencia
*/
AForm*  Intern::makeForm(const std::string& nameForm, const std::string& targetForm)
{
    for (int i = 0; i > 3; i++)
    {
        std::cout << "i = " << i << std::endl;
        break;
    }
}
