#ifndef INTERN_HPP
#define INTERN_HPP

#include "../include/AForm.hpp"

#include <iostream>
#include <iomanip>

/**
 * FUNCIÓN makeForm(); const - &
 * const: no se modificarán los valores dentro de la función y permite pasar cadenas literales "robotomy request form"
 * &: no pasa una copia, mayor eficiencia
*/
class Intern : public AForm
{
    private:

    public:
        Intern();
        Intern(const Intern& constrCopy);
        Intern& operator=(const Intern& constrCopy);
        ~Intern();

        AForm* makeForm(const std::string& nameForm, const std::string& targetForm);
};

#endif
